#include "rpcprovider.h"

#include "rpcapplication.h"
#include <string>
#include <functional>
#include <iostream>
#include<google/protobuf/descriptor.h>
#include"rpcheader.pb.h"
#include<memory>

#include "zookeeper.utl.h"
using namespace std;

void Rpcprovider::Notifyservie(google::protobuf::Service *service)
{
    Serviceinfo serviceinfo;
    const google::protobuf::ServiceDescriptor * servicedes=service->GetDescriptor();
    std::string service_name=servicedes->name();
    int methodcount=servicedes->method_count();
    std::cout<<"service_name:"<<service_name<<std::endl;

    for(int i=0;i<methodcount;++i)
    {
        const google::protobuf::MethodDescriptor *methoddes=servicedes->method(i);
        std::string method_name=methoddes->name();
        serviceinfo.methodmap.insert({method_name,methoddes});
        std::cout<<"method_name:"<< method_name<<endl;

    }
    serviceinfo.service=service;
    servicemap.insert({service_name,serviceinfo});

}
void Rpcprovider::run()
{
    std::string ip = Rpcapplication::getinstance().getconfig().load("rpcserverip");
    uint16_t port = atoi(Rpcapplication::getinstance().getconfig().load("rpcserverport").c_str());
    muduo::net::InetAddress address(ip, port);
    muduo::net::TcpServer server(&eventloop_, address, "rpcserver");
    server.setConnectionCallback(std::bind(&Rpcprovider::onConnection,this,std::placeholders::_1));
    server.setMessageCallback(std::bind(&Rpcprovider::onMessage,this,std::placeholders::_1,placeholders::_2,placeholders::_3));
    server.setThreadNum(4);
    Zkclient zkcli;
    std::cout<<"到这了吗"<<endl;
    zkcli.start();
    std::cout<<"到这了吗"<<endl;
    for(auto &sp:servicemap)
    {
        std::string service_path="/"+sp.first;
        zkcli.create(service_path.c_str(),nullptr,0);
        for(auto &mp:sp.second.methodmap)
        {
            std::string method_path=service_path+"/"+mp.first;
            char method_path_data[128]={0};
            sprintf(method_path_data,"%s:%d",ip.c_str(),port);
            zkcli.create(method_path.c_str(),method_path_data,strlen(method_path_data),ZOO_EPHEMERAL);

        }
    }
    cout<<"The service start at "<<ip<<"at port"<<port<<endl;
    server.start();
    eventloop_.loop();
}

void Rpcprovider::onConnection(const muduo::net::TcpConnectionPtr &conn)
{
    
}
void Rpcprovider::onMessage(const muduo::net::TcpConnectionPtr &conn, muduo::net::Buffer *buffer, muduo::Timestamp)
{
    std::string recv_buf=buffer->retrieveAllAsString();
    uint32_t head_size=0;
    recv_buf.copy((char*)&head_size,4,0);
    //从字符流里读取前4个字节的内容
    std::string rpc_header_str=recv_buf.substr(4,head_size);
    rong::Rpcheader  rpcheader;
    std::string service_name;
    std::string method_name;
    uint32_t args_size;
    if(rpcheader.ParseFromString(rpc_header_str))
    {
        service_name=rpcheader.service_name();
        method_name=rpcheader.method_name();
        args_size=rpcheader.args_size();

    }
    std::string args_str=recv_buf.substr(4+head_size,args_size);
    auto it=servicemap.find(service_name);
    
    auto mit=it->second.methodmap.find(method_name);
    google::protobuf::Service *service=it->second.service;
    const google::protobuf::MethodDescriptor *method=mit->second;
    google::protobuf::Message *request =service->GetRequestPrototype(method).New();
     request->ParseFromString(args_str);
     google::protobuf::Message *response=service->GetResponsePrototype(method).New();
     google::protobuf::Closure *done   =google::protobuf::NewCallback<Rpcprovider,const muduo::net::TcpConnectionPtr &,google::protobuf::Message *>(this,&Rpcprovider::sendrpcresponse,conn,response);
     service->CallMethod(method,nullptr,request,response,done);
}


void Rpcprovider::sendrpcresponse(const muduo::net::TcpConnectionPtr & conn,google::protobuf::Message *response)
{
    std::string resqponse_str;
    response->SerializeToString(&resqponse_str);
    conn->send(resqponse_str);
    conn->shutdown();
}
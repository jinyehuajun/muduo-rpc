#include "rpcchannel.h"
#include "rpcheader.pb.h"
#include <string>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include <error.h>
#include <iostream>
#include<errno.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include "rpcapplication.h"
#include "zookeeper.utl.h"
void myrpcchannel::CallMethod(const google::protobuf::MethodDescriptor *method,
                              google::protobuf::RpcController *controller, const google::protobuf::Message *request,
    
                              google::protobuf::Message *response, google::protobuf::Closure *done)
//head_size +service_name method_name args_size+ args
{
    const google::protobuf::ServiceDescriptor *sd=method->service();
    std::string service_name=sd->name();
    std::string method_name=method->name();
    uint32_t args_size=0;
    std::string args_str;
    request->SerializeToString(&args_str);
    args_size=args_str.size();
    rong::Rpcheader rpcheader;
    rpcheader.set_service_name(service_name);
    rpcheader.set_method_name(method_name);
    rpcheader.set_args_size(args_size);
    uint32_t head_size=0;
    std::string rpc_head_str;
    rpcheader.SerializeToString(&rpc_head_str);
    head_size=rpc_head_str.size();
    std::string send_rpc_str;
    send_rpc_str.insert(0,std::string((char *)&head_size,4));
    send_rpc_str+=rpc_head_str;
    send_rpc_str+=args_str;
    int clientfd=socket(AF_INET, SOCK_STREAM,0);
    if(clientfd==-1)
    {
        std::cout<<"create sockek error:"<<errno<<std::endl;
        exit(EXIT_FAILURE);
    }
    //std::string ip=Rpcapplication::getinstance().getconfig().load("rpcserverip");
    //uint16_t port=atoi(Rpcapplication::getinstance().getconfig().load("rpcserverport").c_str());
    Zkclient zkcli;
    zkcli.start();
    std::string method_path="/"+service_name+"/"+method_name;
    std:;string host_data=zkcli.getdata(method_path.c_str());
    if(host_data=="")
    {
        controller->SetFailed(method_path +" is not exist!");
        return ;

    }
    int idx=host_data.find(":");
    std::string ip=host_data.substr(0,idx);
    uint16_t port=atoi(host_data.substr(idx+1,host_data.size()-idx).c_str());
    struct sockaddr_in server_addr;
    server_addr.sin_family=AF_INET;
    server_addr.sin_port=htons(port);
    server_addr.sin_addr.s_addr=inet_addr(ip.c_str());
    if(connect(clientfd,(struct  sockaddr *)&server_addr,sizeof(server_addr))==-1)
    {
        std::cout<<"connect fail"<<endl;

    };
    send(clientfd,send_rpc_str.c_str(),send_rpc_str.size(),0);
    char buf[1024]={0};
    int recv_size=0;

    recv_size=recv(clientfd,buf,1024,0);
  
    std::string response_str(buf,0,recv_size);

   response->ParseFromString(response_str);
   
    close(clientfd);
}
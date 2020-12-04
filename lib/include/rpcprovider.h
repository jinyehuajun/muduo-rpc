#pragma once
#include "google/protobuf/service.h"
#include<memory>
#include<muduo/net/TcpServer.h>
#include<muduo/net/EventLoop.h>
#include<muduo/net/InetAddress.h>
#include<muduo/net/TcpConnection.h>
#include<muduo/net/Buffer.h>
#include <string>
#include <google/protobuf/descriptor.h>
#include <unordered_map>
using namespace muduo;

class Rpcprovider
{
public:
//框架提供给外部使用的可以发布本地方法
    void Notifyservie(google::protobuf::Service *service);
    void run();
private:
    
    //服务类型信息
      muduo::net::EventLoop  eventloop_;
    struct Serviceinfo
    {
        google::protobuf::Service * service;
        std::unordered_map<std::string,const google::protobuf::MethodDescriptor *> methodmap;

    };
    //存储注册成功的服务对象和其服务方法的所有信息

    std::unordered_map<std::string,Serviceinfo> servicemap;

    void onConnection(const muduo::net::TcpConnectionPtr & conn);
    void onMessage(const muduo::net::TcpConnectionPtr& conn, muduo::net::Buffer *,muduo::Timestamp);
    void sendrpcresponse(const muduo::net::TcpConnectionPtr & conn,google::protobuf::Message *response);

};
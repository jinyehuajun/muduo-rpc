#include<iostream>
#include<string>
#include "../user.pb.h"
#include "rpcapplication.h"
#include "rpcprovider.h"

class Userservice :public rong::Userservicerpc
{
public:
    bool Login(std::string name,std::string pwd)
    {
        std::cout<<"login"<<std::endl;
        std::cout<<"name:"<<name<<"pwd:"<<pwd;

    }
    void Login(::google::protobuf::RpcController *controller,const ::rong::LoginRequest *request,::rong::LoginResponse* response,
    ::google::protobuf::Closure * done)
    {
        std::string name=request->name();
        std::string pwd=request->pwd();
        bool login_result=Login(name,pwd);
        //调用本地服务
        
        rong::Resultcode *code=response->mutable_result();
        code->set_errcode(2);

        code->set_errmsg("");

        response->set_success(login_result);

        done->Run();

    }
};
int main(int argc ,char ** argv)

{
    Rpcapplication::Init(argc,argv);
    Rpcprovider provider;
    provider.Notifyservie(new Userservice());
    provider.run();
    return 0;

}
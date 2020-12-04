#include<iostream>
#include "rpcapplication.h"
#include "user.pb.h"
#include "rpcchannel.h"
int main(int argc,char **argv)
{
    Rpcapplication::Init(argc,argv);
    rong::Userservicerpc_Stub stub(new myrpcchannel());
    rong::LoginRequest request;
    request.set_name("zhangsan");
    request.set_pwd("123");
    rong::LoginResponse response;
    
    stub.Login(nullptr,&request,&response,nullptr);
    if(response.result().errcode()==2)
    {
        std::cout<<"login success"<<endl;
    }
    return 0;
    


}
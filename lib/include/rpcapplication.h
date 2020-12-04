#pragma once

//框架的初始化
#include "rpcconfig.h"
class Rpcapplication
{
public:
    static void Init(int argc,char **argv);
    static Rpcapplication &getinstance()
    {
        static Rpcapplication app;
        return app;

    }
    static Rpcconfig &getconfig()
    {
        return config_;
    }
private:
     static  Rpcconfig  config_;
    Rpcapplication() {}
    Rpcapplication(const Rpcapplication&)=delete;

};
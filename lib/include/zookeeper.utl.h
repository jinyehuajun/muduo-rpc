#pragma once

#include <semaphore.h>
#include<string>
#include <zookeeper/zookeeper.h>

class Zkclient
{
public:
    Zkclient();
    ~Zkclient();
    void start();
    void  create(const char * path ,const char *data,int datalen,int state=0);
    std::string getdata(const char * path);
private:
    zhandle_t *zhandel_;
    //zk客户端句柄

};
#include "zookeeper.utl.h"
#include "rpcapplication.h"
#include <semaphore.h>
#include <iostream>

void global_watcher(zhandle_t *zh, int type, int state, const char *path, void *watcherCtx)

{
    if (type == ZOO_SESSION_EVENT) //回调的消息类型是和绘画相关的消息类型
    {
         std::cout<<"到这了吗4"<<endl;
        if (state == ZOO_CONNECTED_STATE) //ZKCLIENT和zkserver 链接成功
        {
            sem_t *sem = (sem_t *)zoo_get_context(zh);
             std::cout<<"到这了吗5"<<endl;
            sem_post(sem);
             std::cout<<"到这了吗6"<<endl;
        }
    }
}

Zkclient::Zkclient():zhandel_(nullptr)
{

}
Zkclient::~Zkclient()
{
    if(zhandel_!=nullptr)
    {
        zookeeper_close(zhandel_);
    }
}
void Zkclient::start()
{
    std::string host=Rpcapplication::getinstance().getconfig().load("zookeeperip");
    std:string port=Rpcapplication::getinstance().getconfig().load("zookeeperport");
    std::cout<<"到这了吗1"<<endl;
    std::string connstr=host+":"+port;
    zhandel_=zookeeper_init(connstr.c_str(),global_watcher,30000,nullptr,nullptr,0);
     std::cout<<"到这了吗2"<<endl;
    if(nullptr==zhandel_)
    {
        std::cout<<"zookeeper _init error"<<std::endl;
        exit(EXIT_FAILURE);

    }
     std::cout<<"到这了吗100"<<endl;
    sem_t sem;
     std::cout<<"到这了吗1111"<<endl;
    sem_init(&sem,0,0);
     std::cout<<"到这了吗2222"<<endl;
    zoo_set_context(zhandel_,&sem);
     std::cout<<"到这了吗3333"<<endl;
    sem_wait(&sem);
     std::cout<<"到这了吗44444"<<endl;
    std::cout<<"zookeeper_init success !"<<std::endl;
    
    
    
    
    

     std::cout<<"到这了吗3"<<endl;



}
void Zkclient::create(const char *path, const char *data, int datalen, int state )
{
    char path_buf[128];
    int buflen=sizeof(path_buf);
    int flag;
    flag=zoo_exists(zhandel_,path,0,nullptr);
    if(ZNONODE==flag)
    {
        flag=zoo_create(zhandel_,path,data,datalen,&ZOO_OPEN_ACL_UNSAFE,state,path_buf,buflen);
        if(flag==ZOK)
        {
            std::cout<<"znode create success "<<path<<std::endl;

        }
        else
        {
            {
                std::cout<<"znode create fail "<<std::endl;
            }
            exit(EXIT_FAILURE);
        }
        
    }
}
std::string Zkclient::getdata(const char *path)
{   
    char buf[64];
    int buflen=sizeof(buf);
    int flag=zoo_get(zhandel_,path,0,buf,&buflen,nullptr);
    if(flag!=ZOK)

    {
        std::cout<<"error"<<endl;
        return " ";

    }
    else
    {
        return buf;
    }
    
}
#include "rpcconfig.h"
#include <iostream>
#include<string>


void Rpcconfig::loadconfigfile(const char *configfile)
{
    FILE *pf=fopen(configfile,"r");
    if(pf==nullptr)
    {
        std::cout<<configfile<<"is not exist"<<std::endl;
        exit(EXIT_FAILURE);


    }
    while(!feof(pf))//eof文件是否结束
    {
        char buf[512]={0};
        fgets(buf,512,pf);
        //去掉字符串前面的空白字符
        std::string src_buf(buf);

        int idx=src_buf.find_first_not_of(' ');
        if(idx!=-1)
        {
            src_buf=src_buf.substr(idx,src_buf.size()-idx);
        }
        idx=src_buf.find_last_not_of(' ');
        if(idx!=-1)
        {
            src_buf=src_buf.substr(0,idx+1);

        }
        if(src_buf[0]=='#' || src_buf.empty())
        {
            continue;

        }
        idx=src_buf.find('=');
        if(idx==-1)
        {
            continue;
        }
        string key;
        string value;

        key=src_buf.substr(0,idx);
        value=src_buf.substr(idx+1,src_buf.size()-idx);
        configmap_.insert({key,value});

    }
}
string Rpcconfig::load(const string &key)
{
    auto it=configmap_.find(key);
    if(it==configmap_.end())
    {
        return " not find ";

    }
    return it->second;


}
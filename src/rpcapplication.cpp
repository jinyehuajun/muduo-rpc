#include "rpcapplication.h"
#include<unistd.h>
#include<iostream>
#include<string>
using namespace std;
 Rpcconfig Rpcapplication:: config_;
void showhelp()
{
    std::cout<<"format :command -i<configfilr"<<std::endl;

}
 void  Rpcapplication::Init(int argc,char **argv)
 {
     if(argc<2)
     {
         showhelp();
         exit(EXIT_FAILURE);
     }
     int c=0;
     std::string configfile;
     while((c=getopt(argc,argv,"i:"))!=-1)
     {
         switch(c)
         {
             case 'i':
                configfile=optarg;
                break;
            case '?':
                std::cout<<"invalid args"<<std::endl;
            case ':':
                std::cout<<"need configfile"<<endl;
                showhelp();
                exit(EXIT_FAILURE);
            default:
                break;
         }
     }

     //加载配置文件
    config_.loadconfigfile(configfile.c_str());
    


 }
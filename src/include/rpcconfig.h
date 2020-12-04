#pragma once

#include<unordered_map>
#include<string>
using namespace std;
class Rpcconfig
{
public:
    void loadconfigfile(const char *configfile);
    string load(const string &key);
private:

    
    unordered_map<string,string> configmap_;
   
    

};
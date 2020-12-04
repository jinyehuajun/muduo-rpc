#include "rpccontroller.h"

 Rpccontroler::Rpccontroler()
{
    failed_=false;
    errtext=" ";


}
void RPccontroler::Reset()
{
    failed_=false;
    errtext=" ";

}
bool RPccontroler::Failed() const
{
    return failed_;

}
std::string RPccontroler::ErrorText() const
{
       return errtext;


}
void RPccontroler::SetFailed(const std::string &reason)
{
    failed_=false;
    errtext=reason;


}
void RPccontroler::StartCancel()
{

}
bool RPccontroler::IsCanceled() const
{

}
void RPccontroler::NotifyOnCancel(google::protobuf::Closure *callback)
{
    
}
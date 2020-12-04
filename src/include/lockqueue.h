#pragma once
#include<queue>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<memory>
template<typename T>

class Lockqueue
{
public:
    void push(const T &data)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        queue_.push(data);
        

    }
    T pop()
    {
        std::unique_lock<std::mutex> lock(mutex_);
        while (queue_.empty())

        {
            condition_.wait(lock);
        }
        
        T data=queue_.front();
        queue_.pop();
        return data;
    }
    std::queue<T> queue_;
    std::mutex mutex_;
    std::condition_variable condition_;


};
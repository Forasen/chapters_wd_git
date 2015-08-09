/*************************************************************************
    > File Name: sdl_encapsulation.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 05:11:07 PM CST
 ************************************************************************/

#include<iostream>
#include<unistd.h>
#include<errno.h>
#include<pthread.h>

class MutexLock: boost::noncopyable
{
private:
    pthread_mutex_t mutex_;
    pid_t holder_;

public:
    MutexLock()
        :holder_(0)
    {
        pthread_mutex_init(&mutex, NULL);
    }
    ~MutexLock()
    {
        assert(holder_==0);
        pthread_mutex_destroy(&mutex_);
    }
    bool 
}


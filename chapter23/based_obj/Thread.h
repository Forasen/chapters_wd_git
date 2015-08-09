/*********************************************
> File  : Thread.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 03:15:08 PM CST
 ********************************************/

#ifndef __BASED_THREAD_H__
#define __BASED_THREAD_H__

#include<iostream>
#include<functional>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<pthread.h>
using namespace std;

class Thread
{
public:
    typedef std::function<void(void)> ThreadCallback;
public:
    Thread(ThreadCallback callback_);
    ~Thread();
    void start();
    void join();
    static void* runInThread(void*);
    bool isRunning() const;


private:
    pthread_t pthId_;
    bool isRunning_;
    ThreadCallback callback_;

};


#endif

/*********************************************
> File  : MyPoolThread.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:16:03 AM CST
 ********************************************/

#ifndef __WD_MYPOOLTHREAD_H__
#define __WD_MYPOOLTHREAD_H__
#include<iostream>
#include "Thread.h"
#include "ThreadPool.h"

namespace wd
{
    class ThreadPool;

    class MyPoolThread: public Thread
    {
    public:
		MyPoolThread(ThreadPool& threadpool);
        void run();
    private:
        ThreadPool& threadpool_;
    };

}


#endif

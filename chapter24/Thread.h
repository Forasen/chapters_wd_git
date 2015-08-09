/*********************************************
> File  : Thread.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 09:48:23 AM CST
********************************************/

#ifndef __WD_THREAD_H__
#define __WD_THREAD_H__

#include<iostream>
#include<pthread.h>
#include "NonCopyable.h"

namespace wd
{
    class Thread
    {
        public:
        Thread();
        ~Thread();
        void start();
        void join();
        bool isRunning();
        virtual void run() = 0;

        static void runInThread(void*);
        private:
        pthread_t pthId_;
        bool isRunning_;
    };
}

#endif

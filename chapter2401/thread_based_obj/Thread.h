/*********************************************
> File  : Thread.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 03:45:11 PM CST
 ********************************************/

#ifndef __WD_THREAD_H__
#define __WD_THREAD_H__

#include<pthread.h>

namespace wd
{
    class Thread
    {
    public:
        typedef std::function<void(void)> ThreadCallback;
    public:
        Thread(ThreadCallback callback);
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
}

#endif

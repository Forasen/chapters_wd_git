/*********************************************
> File  : ThreadPool.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:06:00 AM CST
 ********************************************/

#ifndef __WD_THREADPOOL_H__
#define __WD_THREADPOOL_H__
#include<iostream>
#include "NonCopyable.h"
#include<vector>
#include "Buffer.h"

namespace wd
{
    class Task;
    class ThreadPool: public NonCopyable
    {
    public:
        ThreadPool(std::size_t numThreads, 
                   std::size_t bufSize)
            :numThreads_(numThreads),
            bufSize_(bufSize),
            buffer_(bufSize)
        {

        }
        ~ThreadPool();
        void start();
        void addTask(Task* ptask);
        void runInThread();
		bool isExit()
    private:
        Task* getTask();
            
    private:
        std::vector<Thread*> vecThreads_;
        std::size_t numThreads_;
        Buffer buffer_;//需要Buffer的实现
        std::size_t bufSize_;
		bool isExit_;
    }
};



#endif

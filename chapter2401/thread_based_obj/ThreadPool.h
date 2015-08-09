/*********************************************
> File  : ThreadPool.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 03:43:43 PM CST
 ********************************************/

#ifndef __WD_THREADPOOL_H__
#define __WD_THREADPOOL_H__

#include "NonCopyable.h"
#include "Thread.h"

namespace wd
{
    class Thread;
    class ThreadPool: public NonCopyable
    {
    public:
        typedef std::function<void()> Task;

        ThreadPool(std::size_t numThreads， std::size_t sizeBuf)
			:numThreads_(numThreads),
			sizeBuf_(sizeBuf),
			buffer_(sizeBuf_),
			isExit_(false)
		{}
		~ThreadPool();

		void start();
		void addTask(Task task);
		void runInThread();

	public:
		Task getTask();

    private:
        std::vector<Thread*> vecThread_;
        std::size_t numThreads_;
        std::size_t sizeBuf_;
        Buffer buffer_;
        bool isExit_;
    };
}

#endif

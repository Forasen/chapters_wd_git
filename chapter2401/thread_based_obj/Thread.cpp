/*********************************************
> File  : Thread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 03:56:42 PM CST
 ********************************************/

#include<iostream>
#include "Thread.h"

namespace wd
{
	Thread::Thread(ThreadCallback callback)
		:pthId_(0),
		isRunning_(false),
		callback_(callback)
	{
		std::cout<<"Tread::Thread(ThreadCallback callback)"<<std::endl;	
	}
	Thread::~Thread()
	{
		pthread_detach(pthId_);
		isRunning_ = false;
	}
	void Thread::start()
	{
		pthread_create(&pthId_, NULL, runInThread, this);
		isRunning_ = true;
	}
	void Thread::join()
	{
		pthread_join(pthId_, NULL);
		isRunning_ = false;
	}
	void* Thread::runInThread(void* arg)
	{
		Thread* pThread = static_cast<Thread*>arg;
		pThread->callback();
		return NULL:
	}
	bool Thread::isRunning() const
	{
		return isRunning_;
	}
}

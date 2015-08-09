/*********************************************
> File  : Thread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:41:26 PM CST
 ********************************************/

#include "Thread.h"

Thread::Thread(ThreadCallback callback)
	:pthId_(0),
	isRunning_(false),
	callback_(callback)
{
	std::cout<<"Thread::Thread(ThreadCallback callback)"<<std::endl;
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
	Thread* pThread = static_cast<Thread*>(arg);
	pThread->callback_();
}

bool Thread::isRunning() const
{
	return isRunning_;
}


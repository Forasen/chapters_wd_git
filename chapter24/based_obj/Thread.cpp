/*********************************************
> File  : Thread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 09:52:26 AM CST
 ********************************************/

#include "Thread.h"


Thread::Thread()
	:pthId_(0), isRunning_(false)
{
	std::cout<<"Thread::Thread()"<<std::endl;
}
Thread::~Thread()
{
	pthread_detach(pthId_);
}

void Thread::start()
{
	pthread_create(&pthId_, NULL, runInThread, NULL);
	isRunning_ = true;
}
void Thread::join()
{
	pthread_join(pthId_, NULL);
	isRunning_ = false;
}
void Thread::runInThread(void* arg)//static 不带this指针，传递一个对象过去
{
	Thread* pThread = static_cast<Thread*>(arg);

	pThread->run();
}

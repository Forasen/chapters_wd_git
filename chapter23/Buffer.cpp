/*********************************************
> File  : Buffer.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:21:33 AM CST
 ********************************************/

#include "Buffer.h"

namespace wd
{
	Buffer::Buffer(int num)
		:notFull_(mutex_), notEmpty_(mutex_), 
		maxSize_(num)
		que_(maxSize_)
		//mutex_(new MutexLock)
	{
		std::cout<<"Buffer::Buffer(int)"<<std::endl;
	}
	Buffer::~Buffer()
	{
		std::cout<<"~Buffer()"<<std::endl;
	}
	void Buffer::push(int no)
	{
		MutexLockGuard mtg(mutex_);//执行加锁操作，不用考虑解锁！
		while(full())
		{
			notFull_.wait();
		}
		que_.push(no);//再发一个通知
		notEmpty_.notify();//向缓冲区中添加数据
	}
	int Buffer::pop()
	{
		MutexLockGuard mtg(mutex_);
		while(empty())
		{
			notEmpty_.wait();

		}
		int num = que_.top();
		que_.pop();
		return num;
	}
	bool empty()
	{
		return que_.empty();
	}
	bool full()
	{
		return que_.size() == maxSize_;
	}
}//end of namespace wd

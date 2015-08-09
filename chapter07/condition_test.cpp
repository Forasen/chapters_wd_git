/*************************************************************************
    > File Name: ./condition_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 05:28:52 PM CST
 ************************************************************************/

#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

class MutexLock
{
private:
	pthread_mutex_t mutex_;
public:
	MutexLock()
	{
		pthread_mutex_init(&mutex_, NULL);
	}
	void lock()
	{

	}
	void unlock();
	pthread_mutex_t* getMutexLockPtr()
	{
		return &mutex_;
	}
};

class condition
{
private:
	pthread_cond_t cond_;
	pthread_mutex_t mutex_;
public:
	condition(MutexLock &mutex)
		:mutex_(mutex)
	{
		
	}
}


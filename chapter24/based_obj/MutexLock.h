/*********************************************
> File  : MutexLock.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:00:03 AM CST
 ********************************************/

#ifndef __WD_MUTEXLOCK_H__
#define __WD_MUTEXLOCK_H__

#include<iostream>
#include "NonCopyable.h"

namespace wd
{

    class MutexLock:public NonCopyable
    {
    public:

        MutexLock();
        ~MutexLock();
        void lock();
        void unlock();
        bool isLocked() const;
        pthread_mutex_t* getMutexPtr();


    private:
        pthread_mutex_t mutex_;
        bool isLocking_;
    };



class MutexLockGuard
{
	public:
		MutexLockGuard(MutexLock& mutex);
		~MutexLockGuard();
	private:
		MutexLock& mutex_;
};

}

#endif

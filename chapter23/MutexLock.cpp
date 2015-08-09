/*********************************************
> File  : MutexLock.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:02:55 AM CST
 ********************************************/

#include "MutexLock.h"

namespace wd
{
    MutexLock::MutexLock()
        :isLocking_(false)
    {
        pthread_mutex_init(&mutex_, NULL);
    }
    MutexLock::~MutexLock()
    {
        pthread_mutex_destroy(&mutex_);
    }
    void MutexLock::lock()
    {
        pthread_mutex_lock(&mutex);
        isLocking_ = true;
    }

    void MutexLock::unlock()
    {
        pthread_mutex_unlock(&mutex_);
        isLocking_ = false;
    }
    bool MutexLock::isLocked() const
    {
        return isLocking_;
    }
    pthread_mutex_t* getMutexPtr()
    {
        return &mutex_;
    }
MutexLockGuard::MutexLockGuard(MutexLock& mutex)
		:mutex_(mutex)
{
	mutex_.lock();
}
}

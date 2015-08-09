/*********************************************
> File  : Condition.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:13:10 AM CST
 ********************************************/

#include<iostream>
#include "Condition.h"

namespace wd
{
Condition::Condition(MutexLock& mutex)
    {

    }
    Condition::~Condition()
    {
        pthread_cond_destroy(&cond_);
    }
    void Condition::wait()
    {
        pthread_cond_wait(&cond_, mutex_.getMutexPtr());
    }
    void Condition::notify()
    {
        pthread_cond_signal(&cond_);
    }
    void Condition::notifyAll()
    {
        pthread_cond_broadcast(&cond_);
    }
}

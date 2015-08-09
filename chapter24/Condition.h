/*********************************************
> File  : Condition.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:07:43 AM CST
 ********************************************/

#ifndef __WD_CONDITION_H__
#define __WD_CONDITION_H__
#include<pthread.h>
#include "NonCopyable.h"
namespace wd
{
    class Condition:public NonCopyable
    {
    public:
        Condition(MutexLock& mutex);
        ~Condition();
        void wait();
        void notify();
        void notifyAll();

    private:
        pthread_cond_t cond_;
        MutexLock& mutex_;
    };
}
#include<iostream>


#endif

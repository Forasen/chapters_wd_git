/*********************************************
> File  : Buffer.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:16:51 AM CST
 ********************************************/

#ifndef __WD_BUFFER_H__
#define __WD_BUFFER_H__
#include "MutexLock.h"
#include<iostream>
#include "Condition.h"
#include<queue>
#include "NonCopyable.h"

namespace wd
{
    class Buffer:public NonCopyable
    {
    public:
        Buffer(int num);
        ~Buffer();
        void push(int no);
        int pop();
        bool full();
        bool empty();

    private:
        MutexLock mutex_;
        Condition notFull_;
        Condition notEmpty_;

        int maxSize_;
        std::queue<int> que_;
    }
}





#endif

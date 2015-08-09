/*********************************************
> File  : Consumer.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:50:53 AM CST
 ********************************************/

#ifndef __WD_CONSUMERTHREAD_H__
#define __WD_CONSUMERTHREAD_H__

#include<iostream>
namespace wd
{
    class ConsumerThread: public Thread
    {
    public:
        void run();
    private:
        void processTask();
    private:
        Buffer& buffer_;
    };
}


#endif

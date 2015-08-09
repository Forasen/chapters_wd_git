*********************************************
> File  : ConsumerThread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:54:21 AM CST
 ********************************************/

#include "ConsumerThread.h"
#include "Buffer.h"

namespace wd
{
    ConsumerThread::ConsumerThread(Buffer& Buffer)
        :Buffer_(Buffer)
    {

    }
    void ConsumerThread::run()
    {
        processTask();
    }
    void ConsumerThread::processTask()
    {
        while(1)
        {
            int num = Buffer_.pop();
            std:: cout<<"consumer a num : "<<num<<std:endl;
        }
    }
}

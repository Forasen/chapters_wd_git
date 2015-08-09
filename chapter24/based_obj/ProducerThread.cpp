/*********************************************
> File  : ProducerThread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:45:55 AM CST
 ********************************************/

#include "ProducerThread.h"

namespace wd
{
    ProducerThread::ProducerThread(Buffer& buffer)
        :buffer_(buffer)
    {

    }
    void ProducerThread::run()
    {
        processTask();
    }
    void ProducerThread::processTask()
    {
        ::srand(time(NULL));
        while(1)
        {
            int num = rand() % 100;
            buffer_.push(num);
            std::cout<<"producer a num : "<<num<<std::endl;
        }
    }
}

/*********************************************
> File  : MyPoolThread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:18:43 AM CST
 ********************************************/

#include "MyPoolThread.h"
#include "ThreadPool.h"

namespace wd
{
    MyPoolThread::MyPoolThread(ThreadPool& threadpool)
        :threadpool_(threadpool)
    {
            
    }
    void MyPoolThread::run()
    {
        threadpool_.runInThread();
    }



}

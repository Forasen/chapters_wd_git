/*********************************************
> File  : test_thread.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 10:06:25 AM CST
 ********************************************/

#include "Thread.h"
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

namespace  wd
{




class MyThread: public wd:Thread
{
public:
    virtual void run()
    {
        ::srand(time(NULL));
        while(1)
        {
            int inum = rand() % 100;
            std::cout<<"print a number : "<<inum<<std::endl;
            sleep(1);
        }
    }
};
}

int main(void)
{
    wd::MyThread* pThread = new wd::MyThread;

    std::unique_ptr<wd::MyThread> pThreadPtr(pThread);

    pThread->start();
    pThread->join();

    delete pThread;

    return 0;
}

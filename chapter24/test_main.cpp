/*********************************************
> File  : test_main.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:37:14 AM CST
 ********************************************/

#include "MyTask.h"
#include<cstdlib>
#include<unistd.h>
#include "ThreadPool.h"

int main(void)
{
    wd::Task* pTask = new wd::MyTask;
    wd::ThreadPool threadpool(4, 10);
    threadpool.start();

    while(1)
    {
        threadpool.addTask(pTask);
        sleep(1);
    }

	delete pTask;
    return 0;
}

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
#include<ctime>
#include<cstdlib>
#include<unistd.h>

void task1()
{
    std::srand(time(NULL));
    while(1)
    {
        int num = rand() % 100;
        std::cout<<"print a num : "<<num<<std::endl;
    }
}

int main(void)
{
    wd::ThreadPool threadpool(4, 10);
    threadpool.start();

    while(1)
    {
        threadpool.addTask(Task);
        std::cout<<"添加任务"<<std::endl;
        sleep(1);
    }

	delete Task;
    return 0;
}

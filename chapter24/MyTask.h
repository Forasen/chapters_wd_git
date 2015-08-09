/*********************************************
> File  : MyTask.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:33:30 AM CST
 ********************************************/

#ifndef __WE_MYTASK_H__
#define __WE_MYTASK_H__
#include<iostream>
#include "Task.h"
#include<ctime>
#include<unistd.h>
#include<cstdlib>

namespace wd
{
    class MyTask: public Task
    {
    public:
        void process()
        {
            std::srand(time(NULL));
            while(1)
            {
                int num = rand() % 100;
                std::cout<<"print a num : "<<num<<std::endl;
                sleep(1);
            }
        }
    };
}

#endif

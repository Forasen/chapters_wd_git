/*********************************************
> File  : Task.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 11:01:43 AM CST
********************************************/

#ifndef __WD_TASK_H__
#define __WD_TASK_H__

#include<iostream>

namespace wd
{
    class Task
    {
    public:
        virtual ~Task(){

        }
        virtual void process();
    };

}
#endif

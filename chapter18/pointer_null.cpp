/*********************************************
> File  : pointer_null.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 05:34:31 PM CST
 ********************************************/

#include<iostream>
#include<cstdlib>
#include<iostream>
#include<stdlib.h>

int main(void)
{
    //int *p1 = nullptr;
    //std::cout<<"*p1 = "<<*p1<<std::endl;;
    //std::cout<<"*p1 = "<<*p1<<", "<<"p1 = "<<p1<<std::endl;

    int a = 1;
    int *p2 = nullptr;
    if(p2 == NULL)
    {
        std::cout<<"Sorry!"<<std::endl;
        return -1;
    }
    std::cout<<*p2<<std::endl;
    //std::cout<<"*p2 = "<<*p2<<", "<<"p2 = "<<p2<<std::endl;

    return 0;
}

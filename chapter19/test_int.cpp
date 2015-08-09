/*********************************************
> File  : test_int.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 10:30:03 PM CST
********************************************/

#include<iostream>

int main(void)
{
    int n = 10;
    for(size_t index=0; index<n; index++)
    {
        int* p = new int;
        std::cout<<"*p = "<<*p<<std::endl;
        std::cout<<"p = "<<p<<std::endl;
    }

    return 0;
}

/*********************************************
> File  : cast.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 02:27:28 PM CST
 ********************************************/

#include<iostream>

int main(void)
{
    int a = 1;
    int b = 99;

    void* p = &a;
    float* dp = static_cast<float*>(p);

    std::cout<<"*dp = "<<*dp<<std::endl;
    //std::cout<<"ret = "<<(static_cast<double>(a)/b)<<std::endl;
    //std::cout<<"ret = "<<a / b<<std::endl;
    return 0;
}

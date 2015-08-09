/*********************************************
> File  : move_swap.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 11:22:57 PM CST
 ********************************************/

#include<iostream>


template<typename T> 
void forward_value(T&& val)
{
    process_value(val);
}
template<typename T>
void swap(T &a, T &b)
{
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

int main(void)
{
    const int &b = 22;
    const int c = 33;
    std::cout<<"&b="<<&b<<std::endl;
    std::cout<<"b="<<b<<std::endl;
    std::cout<<"c="<<c<<std::endl;
#if 0
    int a = 1;  
    int b = 2;
    std::cout<<"a="<<a<<", b="<<b<<std::endl;
    swap(a, b);
    std::cout<<"a="<<a<<", b="<<b<<std::endl;
#endif

    return 0;
}

/*********************************************
> File  : main.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 12 Jul 2015 09:34:23 AM CST
 ********************************************/

#include<iostream>

int func(int, int);

int main(void)
{
    int a;
    int b;
    std::cout<<"Enter two numbers :"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"ret = "<<func(a, b)<<std::endl;
}

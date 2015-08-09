/*********************************************
    > File  : template_overloaded_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 10:12:13 AM CST
 ********************************************/

#include<iostream>

template <class T>
T MAX(T a, T b);

int MAX(int a, int b)
{
    std::cout<<"MAX(int a, int b):";
    return a > b ? a : b;
}


int main(void)
{
    int a = 1;
    int b = 2;
    double d_a = 9.8;
    double d_b = 7.2;

    std::cout<<MAX(a, b)<<std::endl;
    std::cout<<MAX<double>(d_a, d_b)<<std::endl;
    std::cout<<MAX('B', 'A')<<std::endl;

    return 0;
}

template <class T>
T MAX(T a, T b)
{
    std::cout<<"MAX(T a, T b):";
    return a > b ? a : b;
}

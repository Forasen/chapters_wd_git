/*********************************************
    > File  : template.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 09:01:40 AM CST
 ********************************************/

#include<iostream>
template <typename T>

T MAX(const T &a, const T &b)
{
    return a > b ? a : b;
}

int main(void)
{
    int a = 1;
    int b = 2;
    //std::cout<<"MAX(3, 2)="<<MAX(a, b)<<std::endl;
    std::cout<<"MAX(2.1, 3.2)="<<MAX(2.1, 3.2)<<std::endl;

    return 0;
}

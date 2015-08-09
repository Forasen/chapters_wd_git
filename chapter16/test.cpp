/*********************************************
> File  : test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 12:20:48 AM CST
 ********************************************/

#include<iostream>

int main()
{
    const int v2 = 0;
    int a = 10;
    int &r1 = a;
    r1 = v2;
    std::cout<<"r1 = "<<r1<<std::endl;

    return 0;
}

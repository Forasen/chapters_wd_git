/*********************************************
    > File  : template.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 08:57:18 AM CST
 ********************************************/

#include<iostream>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    std::cout<<"MAX(2, 1)="<<MAX(2, 1)<<std::endl;
    std::cout<<"MAX(2.3, 3.4)="<<MAX(2.3, 3.4)<<std::endl;


    return 0;
}



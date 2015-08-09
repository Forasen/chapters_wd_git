/*********************************************
> File  : test1.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 04:38:26 PM CST
 ********************************************/

#include<iostream>
int main(void)
{
    int d = 5;
    int* p1 = &d;
    int* p2 = p1;
    std::cout<<"p1 = "<<p1<<", "<<"*p1 = "<<*p1<<std::endl;
    std::cout<<"p2= "<<p2<<", "<<"*p2= "<<*p2<<std::endl;
#if 0
    int i;
    std::cout<<"i ="<<i<<std::endl;
#endif
    return 0;
}

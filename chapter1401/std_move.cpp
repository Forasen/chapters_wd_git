/*********************************************
> File  : std_move.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 11:18:52 PM CST
 ********************************************/

#include<iostream>

void processValue(int& i)
{
    std::cout<<"LValue processed : "<<i<<std::endl;
}
void processValue(int&& i)
{
    std::cout<<"RValue processed : "<<i<<std::endl;
}

int main(void)
{
    int a = 10;
    processValue(a);
    processValue(std::move(a));
}

/*********************************************
> File  : RL_value.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 09:23:39 PM CST
 ********************************************/

#include<iostream>

void process_value(int& i)
{
    std::cout<<"LValue processed : "<<i<<std::endl;
}
void process_value(int&& i)
{
    std::cout<<"RValue processed : "<<i<<std::endl;
}
void forward_value(int&& i)
{
    process_value(i);
}
int main(void)
{
    int a = 0;
    process_value(a);
    process_value(1);

    forward_value(2);

    return 0;
}

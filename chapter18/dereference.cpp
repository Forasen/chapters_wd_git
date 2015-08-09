/*********************************************
> File  : dereference.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 09:51:59 AM CST
 ********************************************/

#include<iostream>
#include<cstring>

int main(void)
{
    char* str = "hello, world";//共12个字符
    std::cout<<"strlen(str) = "<<strlen(str)<<std::endl;//为什么结果为12
    std::cout<<"sizeof(str) = "<<sizeof(str)<<std::endl;//为什么结果为8，能存放下数据吗？
}

/*********************************************
> File  : test1.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 03:36:30 PM CST
 ********************************************/

#include<iostream>

int&& getvalue()
{
    return 2;
}
int main(void)
{
    int a = 10;
    int &refa = a;

    int &&refc = 10;

    getvalue();
    int&& value = getvalue();

    return 0;
}

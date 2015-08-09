/*********************************************
    > File  : implicit_template_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 10:01:04 AM CST
 ********************************************/

#include<iostream>

template <class T>
T MAX(T a, T b);

int main(void)
{
    int ia = 1;
    int ib = 2;
    int da = 52;
    int db = 2.3;

    std::cout<<"MAX(ia, ib)="<<MAX(ia, ib)<<std::endl;
    std::cout<<"MAX(da, db)="<<MAX(da, db)<<std::endl;
}

template <class T>
T MAX(T a, T b)
{
    return a > b ? a : b;
}

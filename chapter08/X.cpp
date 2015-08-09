/*****************************************************
    > File  : X.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:39:04 AM CST
 ****************************************************/

#include<iostream>

class X
{
    public:
    X()
    :x_(3)
    {

    }
    int x_;
};
int operator +(int lhs, int rhs)
{
    return lhs * rhs;
}
int main(void)
{
    int a = 10;//一个普通的变量指针
    int *p = &a;

    int X::*px = &X::x_;//定义一个成员指针

    X x;
    std::cout<<x.*px<<std::endl;

    return 0;
}

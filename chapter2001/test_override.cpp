/*********************************************
> File  : test_override.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 08:14:12 PM CST
 ********************************************/

#include<iostream>

class B
{
public:
    virtual void fun1(int) const final;
    virtual void fun2();
    void func();
};

class D: public B
{
public:
    ///void fun1(int) const override;
    void fun2() override;
    //void fun3() override;
};

int main(void)
{
    return 0;
}

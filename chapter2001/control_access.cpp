/*********************************************
> File  : control_access.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 10:04:56 PM CST
 ********************************************/

#include<iostream>

class Base
{
//protected:
public:
    int prot_mem;
};

class Derived: public Base
{
public:
    friend void func1(Base&);
    friend void func1(Derived&);
    int ival;
};

void func1(Base& b)
{
    b.prot_mem = 0;
}
void func1(Derived& d)
{
    d.prot_mem = 0;
}

int main(void)
{
    return 0;
}


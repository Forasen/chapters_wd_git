/*********************************************
> File  : name_conflict.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 02:31:10 PM CST
 ********************************************/

#include<iostream>

class Base
{
public:
    Base(int ival=0)
        :mem_(ival)
    {}
protected:
    int mem_;
};

class Derived: public Base
{
public:
    Derived(int ival)
        :mem_(ival)
    {}
    int getVal()
    {
        return Base::mem_;
    }
protected:
    int mem_;
};

int main(void)
{
    Derived d1(42);
    std::cout<<"ret = "<<d1.getVal()<<std::endl;

    return 0;
}

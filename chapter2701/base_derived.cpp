/*********************************************
> File  : base_derived.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 11:11:35 PM CST
 ********************************************/

#include<iostream>

class Base
{
public:
    void baseMem();
protected:
    int i;
};
struct public_derived: public Base
{
    int use_base()
    {
        return i;
    }
};
struct private_derived: private Base
{
    int use_base()
    {
        return i;
    }
};
class Derived: private Base
{
public:
    using Base::size;
protected:
    using Base::n;

}


int main(void)
{
    Base b;
    public_derived d1;
    public_derived d2;
    b.baseMem();

}

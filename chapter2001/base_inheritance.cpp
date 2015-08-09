/*********************************************
> File  : base_inheritance.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 04:00:33 PM CST
 ********************************************/

#include<iostream>

class Drived;

//class Base final
class Base
{
public:
    void static statMem()
    {
        std::cout<<"void static statMem()"<<std::endl;
    }
};
class Drived: public Base
{
public:
    void f(const Drived& rhs);
};

void Drived::f(const Drived& rhs)
{
    std::cout<<"Base::statMem()"<<std::endl;
    Base::statMem();
    std::cout<<"Drived::statMem()"<<std::endl;
    Drived::statMem();
    std::cout<<"rhs.statMem()"<<std::endl;
    rhs.statMem();
    std::cout<<"statMem()"<<std::endl;
    statMem();
}

int main(void)
{
    Drived d;
    Drived d1;
    d.f(d1);
}

/*********************************************
> File  : const_int.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 29 Jun 2015 07:36:25 AM CST
 ********************************************/

#include<iostream>
#if 0
void use_factory(T arg)
{
    Foo* p = new factory(arg);

    //delete p;
    return p;
}
#endif

int main(void)
{
    const int* p = new const int(1024);
    //const std::string* p = new std::string;
    std::cout<<"*p="<<*p<<std::endl;
    delete p;
    std::cout<<"*p="<<*p<<std::endl;
    //std::cout<<"hello"<<std::endl;
    
    //int* p1 = new int;
    //int* p2 = new (nothrow) int;
    int* p3(new int(128));
    auto p4 = p3;
    std::cout<<"*p4="<<*p4<<std::endl;
    std::cout<<"*p3="<<*p3<<std::endl;
    delete p3;
    p3 = nullptr;
    std::cout<<"*p3="<<p3<<std::endl;
    return 0;
}

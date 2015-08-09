/*********************************************
> File  : sharedptr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 07:49:21 AM CST
 ********************************************/

#include<iostream>
#include<memory>
using namespace std;

#if 0
shared_ptr<int> clone(int ival)
{
    //return shared_ptr<int>(new int(ival));
    static_cast<shared_ptr<int> >(new int(ival));
}
void process(shared_ptr<int> ptr)
{

}
int main(void)
{
    shared_ptr<double> p1;
    shsred_ptr<int> p2(new int(42));

    return 0;
}

int main(void)
{
    shared_ptr<int> p(new int(1024));
    //利用p创建一个临时的shared_ptr赋予process的参数
    process(shared_ptr<int>(p));

    if(!p.unique())
    {
        p.reset(new std::string(*p));
    }
    *p += newVal;
    shared_ptr<int> p(new int(42));
    p.reset(new int(1024));
    int* q = p.get();
    {
        shared_ptr<int>(q);
    }

    int foo = *p;
    return 0;
}
#endif
void f()
{
    int* p = new int();

    delete p;
}

void end_connection(connection* c)
{
    disconnect(*c);
}

void f(destination* d)
{
    connection c= connect(&d);
    shared_ptr<connection> p(&c, end_connection);
}

int main(void)
{
    auto p = new int();
    std::cout<<"*p = "<<*p<<std::endl;

    shared_ptr p = make_shared<int>(42);

    return 0;
}

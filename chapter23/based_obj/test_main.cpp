/*********************************************
> File  : test_main.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 03:25:32 PM CST
 ********************************************/

#include "Thread.h"

void print_num(void)
{
    std::srand(time(NULL));
    while(1)
    {
        int inum = rand() % 100;
        std::cout<<"print a num : "<<inum<<std::endl;
        sleep(1);
    }
}

struct Foo
{
    Foo(int num)
        :num_(num)
    {

    }
    void print_num(int i)
    {
        std::cout<<"print num + i ="<<num_ + i<<std::endl;
    } 
    int num_;
};

int main(void)
{
    Foo foo(10);
    Thread thread(std::bind(&Foo::print_num, foo, 20));
    //Thread thread(print_num);
    thread.start();
    thread.join();
    

    return 0;
}


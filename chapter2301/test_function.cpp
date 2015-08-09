/*********************************************
> File  : test_function.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 05:18:55 PM CST
 ********************************************/

#include<iostream>
#include<functional>

int add(int l, int r)
{
    return l + r;
}

struct divide
{
    int operator()(int denominator, int divisor)
    {
        return denominator / divisor;
    }
};

int main(void)
{
    std::function<int(int, int)> f1 = add;
    std::function<int(int, int)> f2 = divide();
    std::function<int(int, int)> f3 = [](int i, int j)
    {
        return i * j;
    };

    std::cout<<"f1(4, 2) = "<<f1(4, 2)<<std::endl;
    std::cout<<"f2(4, 2) = "<<f2(4, 2)<<std::endl;
    std::cout<<"f3(4, 2) = "<<f3(4, 2)<<std::endl;

    return 0;
}

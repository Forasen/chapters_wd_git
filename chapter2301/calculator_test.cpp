/*********************************************
> File  : calculator_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 07:01:17 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<functional>

std::map<std::string, std::function<int(int, int)> > binops =
{
    {
        "+", std::plus<int>()
    },
    {
        "-", std::minus<int>()
    },
    {
        "*", std::multiplies<int>()
    },
    {
        "/", std::divides<int>()
    },
    {
        "%", std::modulus<int>()
    }
};

int main(void)
{
    std::cout<<"Hi, Enter two numbers:"<<std::endl;
    int a, b;
    std::string op;
    while(std::cin>>a>>op>>b)
    std::cout<<binops[op](a, b)<<std::endl;
    return 0;
}

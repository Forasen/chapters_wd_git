/*********************************************
> File  : calculator.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 05:49:49 PM CST
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
    int a, b;
    std::string op;
    std::cout<<"Enter a expressino: "<<std::endl;
    std::cin>>a>>op>>b;
    std::cout<<" = "<<binops[op](a, b)<<std::endl;

    return 0;
    
}

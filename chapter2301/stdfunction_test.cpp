/*********************************************
> File  : stdfunction_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 05:01:14 PM CST
 ********************************************/

#include<iostream>
#include<map>
#include<functional>
using namespace std;

int add(int l, int r)
{
    return l + r;
}

auto mod = [](int i, int j)
{
    return i % j;
};

struct divide
{
    int operator()(int denominator, int divisor)
    {
        return denominator / divisor;
    }
};


int main(void)
{
#if 1
    //std::map<std::string, int(*)(int, int)> binops;
    std::map<std::string, std::function<int(int, int)> > binops =
    {
        {
            "+", add
        },
        {
            "-", std::minus<int>()
        },
        {
            "/", divide()
        },
        {
            "*", [](int i, int j) {
                return i * j;
            }
        },
        {
            "%", mod
        }
    };

    //binops.insert({"+", add});

    int a = 10;
    int b = 20;
    std::cout<<binops["+"](a, b)<<std::endl;
    std::cout<<binops["-"](a, b)<<std::endl;
    std::cout<<binops["*"](a, b)<<std::endl;
    std::cout<<binops["/"](a, b)<<std::endl;
    std::cout<<binops["%"](a, b)<<std::endl;
    //std::cout<<"ret = "<<ret<<std::endl;
#endif

    std::cout<<std::endl<<std::endl;

    std::function<int(int, int)> f1 = add;
    std::function<int(int, int)> f2 = divide();
    std::function<int(int, int)> f3 = [](int l, int r)
                                        {
                                            return l * r;
                                        };

    std::cout<<"f1(4, 2) = "<<f1(4, 2)<<std::endl;
    std::cout<<"f2(4, 2) = "<<f2(4, 2)<<std::endl;
    std::cout<<"f3(4, 2) = "<<f3(4, 2)<<std::endl;

    return 0;
}

/*********************************************
> File  : overloaded_function.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 05:41:59 PM CST
 ********************************************/

#include<iostream>
#include<functional>
#include<map>

int add(int a, int b)
{
    return a + b;
}

class Sales_data
{

};

//Sales_data add(const Sales_data& a, const Sales_data& b);

int main(void)
{
    std::map<std::string, std::function<int(int, int)> > binops;
    binops.insert({
        "+", add
    });

    binops.insert("+", [](int a, int b){
        return a + b;
    })
    return 0;

}

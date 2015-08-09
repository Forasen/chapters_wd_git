/*********************************************
> File  : stdfunction.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 04:48:30 PM CST
 ********************************************/

#include<iostream>
#include<map>

int add(int l, int r)
{
    return l + r;
}

int main(void)
{
    std::map<std::string, int(*)(int, int)> binops;
    binops.insert({"+", add});
    int a = 5;
    int b = 6;
    int ret = binops["+"](a, b);
    std::cout<<"ret = "<<ret<<std::endl;

    return 0;
}

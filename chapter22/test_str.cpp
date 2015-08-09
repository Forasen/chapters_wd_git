/*********************************************
> File  : test_str.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 11:06:54 PM CST
 ********************************************/

#include<iostream>
#include<cstring>

bool judge(const char* lhs, const char* rhs)
{
    return strcmp(lhs, rhs);
}

int main(void)
{
    std::string str1 = "hello";
    std::string str2 = "hello";
    std::cout<<"judge : "<<judge(str1.c_str(), str2.c_str())<<std::endl;

    return 0;
}


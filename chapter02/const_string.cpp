/*************************************************************************
    > File Name: const_string.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 10:16:22 AM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<string.h>

int main(void)
{
    char* str = "abcdef";

    std::cout<<(unsigned int)str<<std::endl;

    //*(str + 1) = 'a';

    //std::cout<<str<<std::endl;

    char* str2 = "abcdef";
    std::cout<<(unsigned int)str2<<std::endl;
    return 0;
}

/*************************************************************************
    > File Name: const_parameter.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sat 13 Jun 2015 11:53:50 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

bool judge_shorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

int main(int argc, char* argv[])
{
    std::string s1 = argv[1];
    std::string s2 = argv[2];
    std::cout<<"result>>"<<judge_shorter(s1, s2)<<std::endl;
    return 0;
}

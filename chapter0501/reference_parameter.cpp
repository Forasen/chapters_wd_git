/*************************************************************************
    > File Name: reference_parameter.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 10:04:27 AM CST
 ************************************************************************/

#include<iostream>

using namespace std;

bool judge(const string &s)
{
    return s.empty();
}

int main(void)
{
    //string s1 = "hello world";
    char s1[] = "hello";
    //string s1 = "";
    std::cout<<"result>>"<<judge(s1)<<std::endl;

    return 0;
}

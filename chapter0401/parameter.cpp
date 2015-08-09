/*************************************************************************
    > File Name: parameter.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sat 13 Jun 2015 11:12:35 PM CST
 ************************************************************************/

#include<iostream>

int max(int val1, int* val2)
{
    return val1 > (*val2) ? val1 : *val2;
}

int main(int argc, char* argv[])
{
    std::cout<<"Enter two numbers>>"<<std::endl;
    int i, j;
    std::cin>>i>>j;
    std::cout<<"result="<<max(i, &j)<<std::endl;

    return 0;
}

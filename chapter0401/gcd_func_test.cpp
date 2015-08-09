/*************************************************************************
    > File Name: gcd_func_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sat 13 Jun 2015 09:32:45 PM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>

int gcd(int val1, int val2)
{
    int tmp;
    while(val2 > 0)
    {
        tmp = val2;
        val2 = val1 % val2;
        val1 = tmp;
    }

    return val1;
}

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout<<"usage: value1, value2"<<std::endl;
    }
    std::cout<<"result>>"<<gcd(atoi(argv[1]), atoi(argv[2]))<<std::endl;

    return 0;
}

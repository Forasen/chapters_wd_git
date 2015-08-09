/*************************************************************************
    > File Name: factorial.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 02:48:10 PM CST
 ************************************************************************/

#include<iostream>

int factorial(int val)
{
    //if(val > 1)
    if(val != 0)
    {
        return factorial(val-1)*val;
    }
    return 1;
}

int main(void)
{
    std::cout<<"Enter a number>>";
    int num;
    std::cin>>num;
    std::cout<<"ret="<<factorial(num)<<std::endl;

    return 0;
}

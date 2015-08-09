/*************************************************************************
    > File Name: ok_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 08:04:15 PM CST
 ************************************************************************/

#include<iostream>

template<typename T>

T MAX(T a, T b)
{
	return a > b ? a : b;
}

int main(void)
{
	std::cout<<"max(5, 6)="<<MAX(5, 6)<<std::endl;
	std::cout<<"max(9.8, 10.2)="<<MAX(9.8, 10.2)<<std::endl;
}


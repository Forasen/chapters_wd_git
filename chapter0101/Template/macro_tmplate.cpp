/*************************************************************************
    > File Name: template1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 07:55:18 PM CST
 ************************************************************************/

#include<iostream>

#define MAX(x, y) ((x)>(y) ? (x) : (y))

int main(void)
{
	std::cout<<"MAX(3, 4)="<<MAX(3, 4)<<std::endl;
	std::cout<<"MAX(3.4, 2.9)="<<MAX(3.4, 2.9)<<std::endl;

	return 0;
}

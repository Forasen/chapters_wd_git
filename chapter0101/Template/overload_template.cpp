/*************************************************************************
    > File Name: overload_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 08:01:08 PM CST
 ************************************************************************/

#include<iostream>

int max(int a, int b)
{
	return a > b ? a : b;
}
double max(double a, double b)
{
	return a > b ? a : b;
}

int main(void)
{
	std::cout<<"max(3, 5)="<<max(3, 5)<<std::endl;
	std::cout<<"max(3.2, 5.6)="<<max(3.2, 5.6)<<std::endl;

	return 0;
}

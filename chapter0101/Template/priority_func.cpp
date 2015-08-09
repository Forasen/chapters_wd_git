/*************************************************************************
    > File Name: priority_func.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 11:24:43 PM CST
 ************************************************************************/

#include<iostream>

int max(int a, int b)
{
	return a > b ? a : b;
}

template<class T>
T max(T a, T b)
{
	std::cout<<"template max:sizeof(a)="<<sizeof(a)<<std::endl;
	return a > b ? a : b;
}

int main(void)
{
	int x = 100;
	int y = 99;
	char a = 'a';
	char b = 'b';

	std::cout<<"max(5, 9)="<<max(x, y)<<std::endl;
	std::cout<<"max(a, b)="<<max(a, b)<<std::endl;
	
	int result = max(a, b);

	std::cout<<"max(a, b)=(int)"<<result<<std::endl;
	std::cout<<"max<char>(a, b)="<<max<char>(x, y)<<std::endl;


	return 0;
}

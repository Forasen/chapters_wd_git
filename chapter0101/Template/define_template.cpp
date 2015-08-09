/*************************************************************************
    > File Name: define_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 08:31:16 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>

template<class T>
T add(T &a, T &b)
{
	return a + b;
}

int main(void)
{
	std::cout<<"add(3, 5)="<<add(3, 5)<<std::endl;
	std::cout<<"add(2.5, 3.5)="<<add(2.5, 3.5)<<std::endl;
	std::string x("Hello ");
	std::string y("World！");
	std::cout<<"add(x, y)="<<add(x, y)<<std::endl;

	return 0;
}

/*************************************************************************
    > File Name: overload_func.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 08:17:50 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

char* add(char* a , char* b)
{
	return strcat(a, b);
}

int main(void)
{
	std::cout<<"add(3, 5)="<<add(3, 5)<<std::endl;
	std::cout<<"add(3.5, 8.9)="<<add(3.5, 8.9)<<std::endl;

	char buf[1024] = "Hello ";
	char buf1[] = "World!";

	std::cout<<"add(buf, buf1):"<<add(buf, buf1)<<std::endl;

	return 0;
}

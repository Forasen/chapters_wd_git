/*************************************************************************
    > File Name: const.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 10:54:01 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX 100

int main(void)
{
	const int a = 10;
	const int b = 20;
	int c = 30;
	const int *pa = &a;

	int *const pd = &c;
	*pd = 40;
	cout<<"c="<<c<<endl;

	int d = 50;
	pd = &d;




	cout<<"*pa="<<*pa<<endl;
	return 0;
}

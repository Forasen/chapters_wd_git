/*************************************************************************
    > File Name: statck.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 02:37:30 PM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/*
 * malloc和new的区别：
 * 1）malloc：只申请空间，并没有对空间进行初始化
 * 2）new：【1】申请相应大小的空间
		   【2】初始化
		   【3】返回申请空间的首地址
*/
int main()
{
	int *pa = (int*)calloc(1, sizeof(int));
	*pa = 10;
	cout<<"*pa="<<*pa<<endl;
	free(pa);

	int *pb = new int(5);

	cout<<"*pb="<<*pb<<endl;
	delete pb;


	int* pc = new int[10];
	int index;
	for(index=0; index<10; index++)
	{
		pc[index] = index;
		cout<<"pc["<<index<<"]"<<pc[index]<<endl;
	}

	delete []pc;//销毁数组的方式

	return 0;

}

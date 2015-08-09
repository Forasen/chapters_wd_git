/*************************************************************************
    > File Name: macro.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 10:27:34 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX 100//对于宏而言，只是字符串的简单替换
				//没有类型定义，出现错误时，在运行时发现

int main(void)
{
	const int a = 10;//const定义是具有类型的。出现错误，在编译期间就可以发现
}

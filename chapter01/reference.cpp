/*************************************************************************
    > File Name: reference.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 11:11:20 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;


void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int arr[5] = {
	1, 2, 3, 4, 5
};
int &index(int idx)
{
	return arr[idx];
}

int &func()
{
	int a = 10;//不要返回一个局部变量的引用
	int b = 20;
	return a;

}

int &func2()//引用不要返回通过new分配的变量的引用
{
	int *pa = new int(3);
	return *pa;
}

int main(void)
{

	int a = 10;
	int b = 20;
	cout<<"before"<<endl;
	cout<<"(a, b)"<<"("<<a<<","<<b<<")"<<endl;
	swap(a, b);
	cout<<"after"<<endl;
	cout<<"(a, b)"<<"("<<a<<","<<b<<")"<<endl;


	index(2) = 100;
	cout<<"call index2()="<<index(2)<<endl;


	cout<<"func()="<<func<<endl;

	int c = func2();

	int *pc = &c;


	cout<<"c="<<c<<endl;

	delete &c;

	return 0;

	int a = 20;
	int b = 30;
	int c = a + func2() + b;//func2()为一个匿名的空间

}


void test0()
{
	int a = 10;
	int &refa = a;
	cout<<"a(before)="<<a<<endl;

	refa = 20;

	cout<<"a(after)="<<a<<endl;


	int c = 30;
	int &refb = c;
	const int &refc = 50;//常引用

	int b = 40;

	refa = b;

	cout<<"a's addrss:"<<&a<<endl;
	cout<<"a's addrss(refs)"<<&refa<<endl;

	cout<<"a = "<<a<<endl;
	cout<<"refa="<<refa<<endl;
	cout<<"b="<<b<<endl;

}

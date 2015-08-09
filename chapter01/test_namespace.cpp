/*************************************************************************
    > File Name: test_namespace.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 09:46:47 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;


namespace wangdao
{
	int num = 1;
	int add(int a, int b)
	{
		return a + b;
	}
	namespace A
	{
		int num = 2;
	}
}

int func()
{
	wangdao::A::num;
}

using wangdao::num;

namespace B
{
	void displayB()
	{
		cout<<"This is C"<<endl;
	}
}

namespace C
{
	void displayC()
	{
		cout<<"This is C"<<endl;
	}
}
int main(void)
{
#if 0
	cout<<"hello world"<<endl;

	cout<<wangdao::num<<endl;

	cout<<wangdao::A::num<<endl;

	cout<<wangdao::add(3, 5)<<endl;

	C::displayC();
#endif

	cout<<num<<endl;

	return 0;
}

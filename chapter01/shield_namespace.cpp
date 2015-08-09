/*************************************************************************
    > File Name: shield_namespace.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 10:08:17 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

extern int num = 0;

namespace B
{
	int num = 2;
}
int func()
{
	return 10;
}


using namespace A;
using namespace B;


namespace A
{
	int num = 1;
	void displayA()
	{
		int num = 3;
		cout<<"displayA中的num:"<<num<<endl;
		cout<<"A中的num:"<<num<<endl;

		cout<<"B中的num:"<<B::num<<endl;
		cout<<"outer num:"<<::num<<endl;
		cout<<"call func"<<func<<endl;
	}
}

int main()
{


	A::displayA();
	return 0;
}
 
namespace B
{
	void displayB()
	{
		A::display();
	}
}

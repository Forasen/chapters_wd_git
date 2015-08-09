/*************************************************************************
    > File Name: using_namespace.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 10:47:04 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace yaya
{
	int num = 1;
	
	class Ex
	{
		public:
			void hello();
	};
}

namespace abao
{
	int num = 2;
	class Ex
	{
		public:
			void hello()
			{
				cout<<"This is abao"<<endl;
				cout<<num<<endl;
			}
	};
}

namespace yaya
{
	void Ex::hello()
	{
		cout<<"This is yaya"<<endl;
		cout<<num<<endl;
	}
}

int main(void)
{
	yaya::Ex obY;
	abao::Ex obA;
	obY.hello();
	obA.hello();

	return 0;
}

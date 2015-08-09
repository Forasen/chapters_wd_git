/*************************************************************************
    > File Name: ./synthesize_copy.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 09:05:39 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Foo
{
	Foo();
	Foo(const Foo&);
};

struct NoName
{
	NoName()
		:pstring(new str::string), i(0), d(0)
	{
	}
private:
	std::string *pstring;
	int i;
	double d;
};

NoName::NoName(const NoName nn)
{
	pstring = new std::string;
	*pstring = *(nn.pstring);
	i = nn.i;
	d = nn.d;
}

NoName::NoName()
	:pstring(new std::string(*(nn.pstring))), i(nn.i), d(nn.d)
{
}

/*************************************************************************
    > File Name: cast.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 02:47:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int ival = 10;
	//double dval = (double)ival;
	//double dval = double(ival);
	

	double dval = static_cast<double>(ival);
	cout<<"dval="<<dval<<endl;

	return 0;
}

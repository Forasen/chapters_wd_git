/*********************************************
    > File  : container_adapter_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 04:20:39 PM CST
 ********************************************/

#include<iostream>
#include<stack>
#include<vector>
#include<cstring>

int main(void)
{
	std::stack<int, std::vector<int> > obI;
	for(size_t i=1; i<=20; i++)
	{
		obI.push(i);
	}
	int x1;
	while(obI.size() > 0)
	{
		x1 = obI.top();
		std::cout<<x1<<" ";
		obI.pop();
	}

	std::cout<<std::endl<<std::endl;

	std::stack<std::string, std::vector<std::string> > obS;
	for(char i='A'; i<='Z'; i++)
	{
		std::string s(2, i);
		obS.push(s);
	}
	std::string x;
	while(obS.size() > 0)
	{
		x = obS.top();
		std::cout<<x<<" ";
		obS.pop();
	}
	std::cout<<std::endl;

	return 0;
}

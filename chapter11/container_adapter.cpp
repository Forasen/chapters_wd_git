/*********************************************
    > File  : container_adapter.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 03:59:16 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<cstring>

using namespace std;

int main(void)
{
    std::stack<int, std::vector<int> > obI;
    for(size_t i=0; i<20; i++)
    {
        obI.push(i+1);
    }
    while(obI.size() > 0)
    {
        int x = obI.top();
        std::cout<<x<<" ";
        obI.pop();
    }
    std::cout<<std::endl;

    std::stack<std::string, std::vector<std::string> > obS;
    for(char i='A'; i<='Z'; i++)
    {
        std::string s(2, i);
        obS.push(s);
    }
    while(obS.size() > 0)
    {
        std::string x = obS.top();
        std::cout<<x<<" ";
        obS.pop();
    }
    std::cout<<std::endl;
    
    return 0;
}

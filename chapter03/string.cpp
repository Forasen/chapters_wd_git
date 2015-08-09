/*************************************************************************
    > File Name: string.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 04:46:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class string
{
private:
    char* pstr_;
public:
    string();
    string(const char* pstr);
    string(const string &str);
    string & operator = (const string &pstr);
    ~string();
};

int main(void)
{


    return 0;
}

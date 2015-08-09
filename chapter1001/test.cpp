/*********************************************
    > File  : test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 12:05:46 AM CST
 ********************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char *p = new char[2];
    std::cout<<"p.strlen()="<<sizeof(p)<<std::endl;
    delete[] p;
    p =NULL;
    delete[] p;
    return 0;
}

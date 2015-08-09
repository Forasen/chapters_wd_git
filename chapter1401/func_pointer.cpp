/*********************************************
> File  : func_pointer.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 07:09:31 PM CST
 ********************************************/

#include<iostream>
using namespace std;

typedef bool (*cmpFcn)(const string&, const string&);
bool lengthCompare(const std::string& strL, const std::string& strR)
{
    return (strL.size() > strR.size());
}

int (*ff(int))(int*, int);
typedef (*PF)(int*, int);
PF ff(int);

extern void ff(std::vector<int>);

void (*pf1)(unsigned int) = &ff;

void (*pf2)(std::vector<int>);
pf2 = &ff;
void (*pf3)(int) = &ff;
t main(void)
{
    std::string str1;
    std::string str2;
    std::cout<<"Enter the 1st string : ";
    std::cin>>str1;
    std::cout<<"Enter the 2nd string : ";
    std::cin>>str2;
    cmpFcn pf = lengthCompare;
    bool ret;
    ret = (*pf)(str1, str2);
    std::cout<<"bool : "<<ret<<std::endl;

    
    return 0;
}

/*********************************************
> File  : equal.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 08:31:54 PM CST
 ********************************************/

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(void)
{
    char* p[] = {
        "hello", "world", "!"
    };
    char* q[] = {
        strdup(p[0]), strdup(p[1]), strdup(p[2])
    };
    char* r[] = {
        p[0], p[1], p[2]
    };

    std::cout<<"ret1 : "<<equal(begin(p), end(p), q)<<std::endl;
    std::cout<<"ret2 : "<<equal(begin(p), end(p), r)<<std::endl;

    return 0;
}

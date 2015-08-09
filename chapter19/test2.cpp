/*********************************************
> File  : test2.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 11:03:30 PM CST
 ********************************************/

#include<iostream>

class Test
{
    public:
    Test():h(d){
    
    }

    public:
    char a;
    short b;
    bool c;
    int d;
    float e;
    double f;
    int arr[5] ;
    int* p;
    int &h;
    static int a1;

};

int main()
{
    Test t;
    std::cout<<sizeof(t)<<std::endl;

}

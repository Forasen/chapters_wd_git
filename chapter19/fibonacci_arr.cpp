/*********************************************
> File  : fibonacci_arr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 10:17:46 AM CST
 ********************************************/

#include<iostream>
#include<stdio.h>
#include<time.h>

int non_recursive(int n)
{
    int pre = 1;
    int cur = 1;
    for(std::size_t index=2; index<n; index++)
    {
        int tmp = pre;
        pre = cur;
        cur = tmp + pre;
    }
    return cur;
}

int main(void)
{
    int n;
    std::cout<<"Enter a number:";
    std::cin>>n;
    clock_t t = clock();
    std::cout<<"ret = "<<non_recursive(n)<<std::endl;
    clock_t t1 = clock();
    std::cout<<"time : "<<((double)(t1-t)/CLOCKS_PER_SEC)<<std::endl;

    return 0;
}

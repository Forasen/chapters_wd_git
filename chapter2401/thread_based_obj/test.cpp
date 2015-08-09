/*********************************************
> File  : test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 04 Jul 2015 09:20:31 AM CST
 ********************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>

typedef int arr[42];

int main(void)
{
    int* p = new arr;
    std::cout<<"size = "<<sizeof(arr)<<std::endl;

    return 0;
}

/*************************************************************************
> File Name: memory.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Thu 11 Jun 2015 05:52:27 PM CST
************************************************************************/

#include<iostream>
#include<stdio.h>

int ival = 10;
static int const_ival = 20;
double dval = 30.0;

int main(void)
{
    printf("&ival=%x\n", &ival);
    printf("&const_ival=%x\n", &const_ival);
    printf("&dval=%x\n", &dval);


    int ival_local = 40;
    {
        const int ival_inner = 50;
        printf("ival_inner=%x\n", &ival_inner);
    }

    double dval_local = 60.0;
    char *ptr = "123456";

    printf("&ival_local=%x\n", &ival_local);
    printf("dval_local=%x\n", &dval_local);
    printf("ptr=%x\n", ptr);

    return 0;
}

/*************************************************************************
> File Name: const2.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Thu 11 Jun 2015 10:21:38 AM CST
************************************************************************/

#include<iostream>
#include<stdio.h>

int ival = 20;
const int ival2 = 20;//位于文字常量区
double dval = 30.0;

int main(void)
{
    printf("ival=%x\n", &val);
    printf("ival2=%x\n", &val);
    printf("dval=%x\n", &val);

    int ival3 = 20;
    const int ival4 = 20;//位于栈区
    double dval1 = 30.0;

    printf("ival3=%x\n", &ival3);
    printf("ival=%x\n", &val);
    printf("ival=%x\n", &val);
}

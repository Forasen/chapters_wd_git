/*************************************************************************
    > File Name: memory1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 08:33:19 PM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>

void fun1(int a)
{
    printf("&a=%x\n", &a);
}
void fun2(int b)
{
    printf("&b=%x\n", &b);
    fun1(b);
}



int main(void)
{
    int a = 1;
    fun2(a);
    return 0;
}

void test1()
{

    int ival = 10;
    double dval = 20.0;
    char ch1 = 'A';
    char ch2 = 'B';
    double dval2 = 30.0;

    printf("&ival=%x\n", &ival);
    printf("&dval=%x\n", &dval);
    printf("&ch1=%x\n", &ch1);
    printf("&ch2=%x\n", &ch2);
    printf("&dval2=%x\n", &dval2);
}

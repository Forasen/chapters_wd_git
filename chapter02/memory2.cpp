/*************************************************************************
    > File Name: memory2.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 10:54:02 AM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#if 0
int main(void)
{
    int ival = 10;
    double dval = 20.0;
    char ch1 = 'A';
    char ch2 = 'B';
    double dval2 = 30.0;

    printf("&ival=%x\n", &ival);
    printf("&dval=%x\n", &dval);
    printf("&ch1=%x\n", &ch1);
    printf("*ch2=%x\n", &ch2);
    printf("&dval2=%x\n", &dval2);

    return 0;
}
#endif

void func1(int a)
{
    printf("&a = %x\n", &a);
}
void func2(int b)
{
    printf("&b=%x\n", &b);
    func1(b);
}

int main(void)
{
    int a = 1;
    func2(a);

    return 0;
}

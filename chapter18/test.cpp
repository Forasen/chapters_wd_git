/*********************************************
> File  : ./test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 07:49:11 AM CST
 ********************************************/

#include<iostream>

int main(void)
{
	//int* a = new int();

    int b = 5;
    int *p = &b;
    int* &r = p;
    int i = 10;
    r = &i;
    *r = 0;
    std::cout<<"i = "<<'\n'<<i<<std::endl;

	return 0;
}

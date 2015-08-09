/*************************************************************************
    > File Name: pointer_reference.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 07:32:35 AM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
void swap(int* &val1, int* &val2)
{
    int *tmp = val1;
    val1 = val2;
    val2 = tmp;
}

int main(int argc, char* argv[])
{
    int val_i = atoi(argv[1]);
    int val_j = atoi(argv[2]);

    int* p1 = &val_i;
    int* p2 = &val_j;

    swap(p1, p2);

    std::cout<<"result>>"<<*p1<<", "<<*p2<<std::endl;

    return 0;
}

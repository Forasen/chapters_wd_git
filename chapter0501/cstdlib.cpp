/*************************************************************************
    > File Name: cstdlib.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 10:47:04 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int some_failure = 1;
    if(some_failure)
    {
        std::cout<<"failure"<<std::endl;
        return EXIT_FAILURE;
    }
    else
    {
        std::cout<<"success"<<std::endl;
        return EXIT_SUCCESS;
    }
}


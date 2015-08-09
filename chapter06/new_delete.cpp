/*************************************************************************
    > File Name: new_delete.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 10:19:26 AM CST
 ************************************************************************/

#include<iostream>
void* operator new(size_t);
void* operator new[](size_t);

void* delete new(size_t);
void* delete new[](size_t);


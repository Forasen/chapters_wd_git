/*****************************************************
    > File  : nested.h
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 07:34:15 PM CST
 ****************************************************/

#ifndef __NESTED_H__
#define __NESTED_H__

#include<iostream>

class line
{
    class Pimpl;

private:
    Pimpl* pImpl_;

public:
    line(int x1, int y1, int x2, int y2);
    void print_line();
};

#endif

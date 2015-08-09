/*****************************************************
    > File  : point.h
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:09:04 AM CST
 ****************************************************/

#ifndef __POINT_H__
#define __POINT_H__
#include<iostream>
#include<cmath>
class line;//进行前向声明

class point
{
public:
    friend class line;
    point(int x=0, int y=0);

    void display();

private:
    int x_;
    int y_;
};

#endif

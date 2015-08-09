/*****************************************************
    > File  : Line.h
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 09:54:00 AM CST
 ****************************************************/
#ifndef __LINE_H__
#define __LINE_H__

#include<iostream>
#include<cmath>
//#include "point.h"
class point;//类的前向声明，以减少头文件的引用，进而可以防止头文件的循环依赖
class line
{
public:
    float distance(const point &p1, const point &p2);
};


#endif

/*****************************************************
    > File  : nested.h
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 04:50:39 PM CST
 ****************************************************/

#ifndef __NESTED_H__
#define __NESTED_H__
#include<iostream>
class line
{
//private:
	class pip;//前向声明
public:
	line(int x1, int y1, int x2, int y2);
	void print_line();

private:
	pip *pp_;
};



#endif

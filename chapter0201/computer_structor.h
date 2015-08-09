/*************************************************************************
    > File Name: computer_structor.h
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 07:25:21 PM CST
 ************************************************************************/

#ifndef __COMPUTER_STRUCTOR_H__
#define __COMPUTER_STRUCTOR_H__

#include<iostream>
#include<cstring>
class Computer
{
//private:
	char m_pBrand[20];
	float m_Price;
public:
	Computer();
	Computer(char* pBrand, float Price);
	void print();
	void setBrand(char* brand);
	void setPrice(float price);
};

struct Student
{
	int sno;
	char name[1024];
};

#endif

/*************************************************************************
    > File Name: point1.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 03:15:20 PM CST
 ************************************************************************/

#include<iostream>

class point1
{
private:
    int m_ix;
    int m_iy;
public:
    point1(int val):m_ix(val), m_iy(m_ix)
    {
    }
    point1()
    {

    }

    ~point1()
    {
        std::cout<<"point1::~point1"<<std::endl;
    }
    void print()
    {
        std::cout<<"m_ix="<<m_ix<<" "
                 <<"m_iy="<<m_iy
                 <<std::endl;
    }

};

int main(void)
{
    point1 pt1(3);
    pt1.print();

    {
        point1 pt2(55555);
        pt2.print();
        std::cout<<"pt2 over!"<<std::endl;
    }
    point1 pt3 = 1;
    pt3.print();

    point1 pt4 = point1();
    pt4.print();
    return 0;
}

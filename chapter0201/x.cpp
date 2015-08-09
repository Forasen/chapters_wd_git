/*************************************************************************
    > File Name: x.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 05:42:59 PM CST
 ************************************************************************/

#include<iostream>

class X
{
private:
    int m_ix;
    int m_iy;
public:
    X(int val):m_ix(val), m_iy(val)
    {

    }

    void print()
    {
        std::cout<<"("<<m_ix<<", "<<m_iy<<")"<<std::endl;
    }
};

int main(void)
{
    X test = 3;
    test.print();

    return 0;
}

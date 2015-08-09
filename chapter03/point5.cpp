/*************************************************************************
    > File Name: point5.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 04:08:27 PM CST
 ************************************************************************/

#include<iostream>

class point
{
private:
    int x_;
    int y_;
public:
    point(int x=0, int y=0)
        :x_(x), y_(y)
    {
        static int icount = 0;
        icount++;
        std::cout<<"constructor been called>>"<<icount<<std::endl;
    }

    void print() const
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
};

int main(void)
{
    point pt1[2];
    
    point pt2[2] = {
        point(1, 2), 
        point(3, 4)
    };//anonymity object
    pt2[0].print();
    pt2[1].print();

    point pt3[] = 
    {
        point(5, 6),
        point(7, 8)
    };

    point pt4[5] = 
    {
        point(9, 10),
        point(11, 12)
    };
    return 0;
}

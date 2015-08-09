/*************************************************************************
> File Name: copy_constructor.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Fri 12 Jun 2015 09:31:06 AM CST
************************************************************************/

#include<iostream>

class point
{
    private:

    point(const point &p)
    :x_(p.x_), y_(p.y_)
    {
        std::cout<<"calling the copy_constructor_func"<<std::endl;
    }
    int x_;
    int y_;
    public:
    point(int x=1, int y=1)
    :x_(x), y_(y)
    {
        std::cout<<"calling the constructor_func"<<std::endl;
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
};

int main(void)
{
    point pt1;
    pt1.print();

    point pt2(3, 5);
    pt2.print();

    point pt3 = pt2;
    pt3.print();

    return 0;
}

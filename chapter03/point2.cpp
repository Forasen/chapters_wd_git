/*************************************************************************
    > File Name: point2.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 11:03:23 AM CST
 ************************************************************************/

#include<iostream>

class point
{
private:
    int x_;
    int y_;
    int &iref;
    double &dref;

public:
    point(int x, int y, double &dz)
        :x_(x), y_(y), iref(x_), dref(dz)
    {
        //x_ = x;
        //y_ = y;
        //iref = x_ 为赋值操作，不是真正的初始化
    }

    point(const point &pt)
        :x_(pt.x_), y_(pt.y_)
    {
        //x_ = pt.x_;
        //y_ = pt.y_;
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<std::endl;
        std::cout<<"("<<iref<<", "<<dref<<std::endl;
    }

    void set_value(int val)
    {
        x_ = val;
    }
};

int main(void)
{
    double dval = 20.1;
    point pt(19, 18，dval);
    pt.print();

    std::cout<<std::endl;

    point pt2(pt);
    pt2.print();

    std::cout<<"change the value of pt"<<std::endl;
    pt.set_value(77);
    pt.print();

    pt2.print();


    std::cout<<"change the value of dval"<<std::endl;
    dval = 10.0;
    pt.print();
    pt2.print();
    return 0;
}

/*************************************************************************
    > File Name: point4.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 02:57:05 PM CST
 ************************************************************************/

#include<iostream>

class point
{

private:
    int x_;
    int y_;

private:
    void set() const
    {
        std::cout<<"set()"<<std::endl;
    }
public:
    point(int x, int y)
        :x_(x), y_(y)
    {

    }

    void print() const
    //void print(ponit* const this)
    {
        //this = 0xff11;//恶意操作
        //x_ = 10;
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;

        set();//const 成员函数只能调用const成员函数
    }
};

int main(void)
{
    point pt1(3, 5);
    pt1.print();

    const point pt2(33, 55);
    pt2.print();

    return 0;
}

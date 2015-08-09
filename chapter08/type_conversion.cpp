/*****************************************************
    > File  : implicit_conversion.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 04:03:02 PM CST
 ****************************************************/

#include<iostream>

class point
{
private:
    double dx_;
    double dy_;
public:
    point(double dx=1, double dy=1)
        :dx_(dx), dy_(dy)
    {}

    friend std::ostream & operator<<(std::ostream &os, const point &rhs);
    
};

std::ostream & operator <<(std::ostream &os, const point &rhs)
{
    os<<"("<<dx_<<", "<<dy_<<")"<<std::endl;

    return os;
}

class original_point
{
private:
    int x_;
    int y_;
public:
    //加上explicit
    original_point(int x=0, int y=0)
        :x_(x), y_(y)
    {
        std::cout<<"original_point"<<std::endl;
    }
    //加上explicit
    original_point(point &rhs)
        :x_(rhs.dx_), y_(rhs.dy_)
    {}
    friend std::ostream & operator<<(std::ostream &os, const original_point &rhs);

    operator int()
    {
        std::cout<<"operator int()"<<std::endl;

        return x_;
    }
    operator double()
    //类型转换函数：1.必须是成员函数；
    //2.没有返回值，但必须使用return返回一个目标类型的变量
    //3.没有参数
    //4.尽量不要使用，影响代码的可读性！
    {
        std::cout<<"operator double()"<<std::endl;
        return x_ * y_;
    }

    //用相应的方法进行替代
#if 0
    int getX()
    {
        return x_;
    }
    int multiply()
    {
        return x_ * y_;
    }
#endif
};

std::ostream & operator<<(std::ostream &os, const original_point &rhs)
{
    os<<"("<<x_<<", "<<y_<<")"<<std::endl;
}

int main(void)
{
    original_point p1;
    std::cout<<"5 转换成："<<std::endl;
    p1= 5;//隐式转换
    std::cout<<p1<<std::endl;

    std::cout<<std::endl;

    double dou = 1.2;
    p1 = dou;
    std::cout<<"1.2转为："<<std::endl;
    std::cout<<p1<<std::endl;


    point p2(12.34, 56.78);
    p1 = p2;
    std::cout<<"(12.34, 56.78)转换成：";
    std::cout<<p1<<std::endl;

    std::cout<<std::endl;
    int x1 = p1;
    std::cout<<"x1="<<x1<<std::endl;

    double x2 = p1;
    std::cout<<"x2="<<x2<<std::endl;


    double x2 = p1;
    p2 = p1;
    std::cout<<"p2="<<p2<<std::endl;

    return 0;
}

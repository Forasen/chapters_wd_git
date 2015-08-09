/*****************************************************
    > File  : nested.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 07:37:48 PM CST
 ****************************************************/

#include "nested.h"

class line::Pimpl
{
private:
    point p1_;
    point p2_;

private:
    class point
    {
    private:
        int x_;
        int y_;
    public:
        point(int x=0, int y=0)
            :x_(x), y_(y)
        {}
        void print_point();
    };
public:
    Pimpl(int x1, int y1, int x2, int y2)
        :p1_(x1, y1), p2(x2, y2)
    {}
    void print_line()
    {
        p1_.print_point();

        std::cout<<"------>";
        p2_.print_point();
    }
};

void line::Pimpl::point::print_point()
{
    std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
}

line::line(int x1, int y1, int x2, int y2)
{
    pImpl_ = new line::Pimpl(x1, y1, x2, y2);
}

void line::print_line()
{
    pImpl_->print_line();
}

int main()
{
    line l1(1, 2, 3, 4);
    l1.print_line();

    return 0;
}

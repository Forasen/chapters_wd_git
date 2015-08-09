/*****************************************************
> File  : nested.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 17 Jun 2015 04:42:32 PM CST
****************************************************/

#include "nested.h"

class line::pip
{
    private:
    //public:
    class point
    {
        private:
        int x_;
        int y_;
        public:
        point(int x=0,  int y=0)
        :x_(x), y_(y)
        {}
        void print_point();
    };

    line(int x1, int y1, int x2, int y2)
        :p1_(x1, y1), p2_(x2, y2)
    {

    }
    void print_line()
    {
        p1_.print_point();
        std::cout<<"——-----------"<<std::endl;
	{};
    }
    private:
    point p1_;
    point p2_;
};

void line::pip::point::print_point()
{

    std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
}



line::line(int x1, int y1, int x2, int y2)
{
    pip1 = new line::pip(x1, y1, x2, y2);
}

int main(void)
{
    line l1(1, 2, 3, 4);
    l1.print_line();

    return 0;
}

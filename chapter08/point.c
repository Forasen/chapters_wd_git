/*****************************************************
    > File  : point.c
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 10:14:02 AM CST
 ****************************************************/

#include "point.h"

point::point(int x, int y)
    :x_(x), y_(y)
    {}
    void point::display()
{
    std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
}

class line
{
public:
    float distance()
    {
        return sqrt((p1.x_-p2.x_)*(p1.x_-p2.x_) + (p1.y_-p2.y_)*(p1.y_-p2.y_));
    }

    void set(point &p, int x, int y)
    {
        p.x_ = x;
        p.y_ = y;
    }
};

int main(void)
{
    point p1(1, 2);
    point p2(4, 5);
    p1.display();
    p2.display();

    line line1;
    std::cout<<"distance between p1 and p2:"<<line1.distance(p1, p2)<<std::endl;


    line2.set(p1, 7, 8);
    std::cout<<"p1 value:"<<line2.display()<<std::endl;
    return 0;
}


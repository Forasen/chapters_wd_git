/*****************************************************
    > File  : Line.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 09:57:18 AM CST
 ****************************************************/

#include "Line.h"

class point
{

    friend float line::distance(const point &p1, const point &p2);
private:
    int x_;
    int y_;
public:
    point(int x, int y)
        :x_(x), y_(y)
    {}
    void display()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
};
float line::distance(const point &p1, const point &p2)
{
    return sqrt((p1.x_-p2.x_)*(p1.x_-p2.x_) + (p1.y_-p2.y_)*(p1.y_-p2.y_));
}

int main(void)
{
    point p1(1, 2);
    point p2(4, 5);
    p1.display();
    p2.display();

    line line1;
    std::cout<<"the distance between p1 and p2 is(for line):"<<line1.distance(p1, p2)<<std::endl;

    return 0;
}

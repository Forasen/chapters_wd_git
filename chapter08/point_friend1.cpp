/*****************************************************
    > File  : point_friend1.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 09:39:43 AM CST
 ****************************************************/

#include<iostream>
#include<math.h>
class point
{
    friend float distance(const point &p1, const point &p2);
private:
    int x_;
    int y_;
public:
    point(int x=0, int y=0)
        :x_(x), y_(y)
    {

    }
    void display()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
};

float distance(const point &p1, const point &p2)
{
    return sqrt((p1.x_-p2.x_)*(p1.x_-p2.x_) + (p1.y_-p2.y_)*(p1.y_-p2.y_));

}

int main(void)
{
    point p1(1, 2);
    point p2(4, 5);

    p1.display();
    p2.display();

    std::cout<<"the distance between p1 and p2 is:"<<distance(p1, p2)<<std::endl;

    return 0;
}

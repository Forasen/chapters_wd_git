/*************************************************************************
    > File Name: point.cpp
    > Author: Newy_ork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 08:59:35 PM CST
 ************************************************************************/

#include<iostream>

class point
{
private:
    int x_;
    int y_;
public:
    point(int ix=1, int iy=1):x_(ix), y_(iy)
    {
        
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
    ~point()
    {
        std::cout<<"~point()"<<std::endl;
    }
};

int main(void)
{
    point pt1;
    pt1.print();

    {
        point pt2(5, 6);
        pt2.print();
    }

    point *ppt3 = new point(10, 20);
    ppt3->print();
    delete ppt3;

    return 0;
}

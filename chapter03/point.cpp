/*************************************************************************
    > File Name: point.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 10:03:26 AM CST
 ************************************************************************/

#include<iostream>

class point
{
private:
    int x_;
    int y_;
public:
    point(int x=0, int y=0)
        :x_(x), y_(y)
    {
        std::cout<<"constructor_func"<<std::endl;
    }

    point(const point &pt)
        :x_(pt.x_), y_(pt.y_)
    {
        std::cout<<"copy_constructor_func"<<std::endl;
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
        std::cout<<std::endl;
    }

    //point operator = (const point & rhs)//tell the di
    point & operator = (const point & rhs)
    {
        std::cout<<"assign operation!"<<std::endl;
        if(this == &rhs)
        {
            std::cout<<"self assign"<<std::endl;
            return *this;
        }
        x_ = rhs.x_;
        y_ = rhs.y_;


        return *this;
    }
};

#if 0
point get_point()
{
    point pt3(22, 99);
    return pt3;
}
#endif

#if 1
point get_point()
{
    point *pt3 = new point(10, 20);
    return *pt3;
}
#endif

int main(void)
{
    point pt1(3, 5);
    pt1.print();

#if 1
    point pt2 = pt1;
    pt2.print();
#endif

    point pt3 = get_point();
    pt3.print();

#if 1
    point pt4(98, 6);
    pt4 = pt4;
    pt4.print();
#endif

#if 1
    point pt5;
    pt5 = pt4;//call the assign operator, remind the self assignment
    pt5.print();
#endif

    return 0;
}



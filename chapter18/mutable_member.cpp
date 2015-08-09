/*********************************************
> File  : mutable_member.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 03:42:32 PM CST
 ********************************************/

#include<iostream>

class Point
{
private:
    int x_;
    int y_;
    //mutable unsigned int cnt = 0;
    static int cnt;
public:
    Point() = default;
    Point(int x, int y)
        :x_(x), y_(y)
    {}
    //void print() const
    Point& mend(std::string::size_type ix)
    {
        
    }
    Point& print() const
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
        return *this;
    }
    void some_member();
    void some_member() const;
};

int Point::cnt = 0;
//void Point::some_member() const
void Point::some_member()
{
    cnt++;
    std::cout<<"You are the "<<cnt<<"th visitor!"<<std::endl;
}
int main(void)
{
    Point p1(5, 5);
    p1.some_member();

    Point p2(3, 3);
    p2.some_member();
    return 0;
}

/*********************************************
> File  : test_reference.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 09:09:57 AM CST
 ********************************************/

#include<iostream>

class Point
{
public:
    explicit Point(int x=0, int y=0)
        :x_(x), y_(y)
    {
        std::cout<<"Point(int x=0, int y=0)!"<<std::endl;
    }
    explicit Point(std::string str)
        :str_(str)
    {
        std::cout<<"Point(std::string str)!"<<std::endl;
    }
    ~Point()
    {
        std::cout<<"~Point()!"<<std::endl;
    }
    Point combine(const Point& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        return *this;
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
    void print_str()
    {
        std::cout<<"str_ : "<<str_<<std::endl;
    }

    void print_Point(const Point& rhs)
    {
        std::cout<<"print_Point(const Point& rhs) : "<<std::endl;
        std::cout<<"x_ = "<<rhs.x_<<", "<<"y_ = "<<rhs.y_<<std::endl;
    }

private:
    int x_;
    int y_;
    std::string str_;
};

int main(void)
{
    Point p1(11, 11);
    p1.print();

    Point p2(22, 22);
    p2.print();

#if 0
    int x = 55;
    p1.combine(x);
    std::cout<<"p1.print() : ";
    p1.print();
#endif

    std::string aa = "hello world!";
    Point p_aa(aa);
    p_aa.print_str();


    p1.combine(p2);
    std::cout<<std::endl<<"after p1.combine(p2)……"<<std::endl;
    std::cout<<"p1.print() : ";
    p1.print(); 

    std::cout<<std::endl;

    Point p3;
    p3 = p1.combine(p2);
    std::cout<<"p3.print() : ";
    p3.print();
    
    std::cout<<std::endl;

    return 0;
}

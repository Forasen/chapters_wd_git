/*********************************************
> File  : string_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 09:23:51 AM CST
 ********************************************/

#include<iostream>
#include<memory>

class Point
{
private:
    int x_;
    int y_;
public:
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
    Point(int x, int y)
        :x_(x), y_(y)
    {
        std::cout<<"Point(int x, int y)"<<std::endl;
    }
#if 0
    Point* add(const Point* rhs)
    {
        this->x_ += rhs->x_;
        this->y_ += rhs->y_;
    }
#endif   
    std::shared_ptr<Point> add(const Point* rhs)
    {
        this->x_ += rhs->x_;
        this->y_ += rhs->y_;
        return shared_from_this();
        return std::shared_ptr<Point>(this);
    }
    ~Point()
    {
        std::cout<<"~Point()"<<std::endl;
    }
};
struct fcloser
{
    void operator()(FILE* fp)
    {
        if(fp)
        {
            std::cout<<"fclose()"<<std::endl;
            fclose(fp);
        }
    }
};

void fcloser(FILE* pf)
{
    if(pf)
    {
        std::cout<<"fclose()"<<std::endl;
        fclose(pf);
    }
}
int main(void)
{
    std::shared_ptr<Point> p1(new Point(1, 2));
    std::shared_ptr<Point> p2(new Point(3, 4));
    
    //p2.reset(p1->add(p2.get()));
    //p2.reset(p1->add(p2.get()));
    p2.swap(p1->add(p2.get()));

    std::shared_ptr<Point> p3 = p1->swap(p2.get());
    //(new Point(3, 4));
    //p2->print();
    p2.swap(p3);
     FILE* pf = fopen("Point3D.cpp", "r+");
    std::shared_ptr<FILE> p4(pf, fcloser());

    return 0;
}

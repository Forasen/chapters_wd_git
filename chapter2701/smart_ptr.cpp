/*********************************************
> File  : smart_ptr.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 01:31:41 PM CST
 ********************************************/

#include<iostream>

class Point
{
public:
    Point(int x=0, int y=0)
        :x_(x), y_(y)
    {}
    int getX() const
    {
        return x_;
    }
    int getY() const
    {
        return y_;
    }
    void setX(int x)
    {
        x_ = x;
    }
    void setY(int y)
    {
        y_ = y;
    }
    void print()
    {
        std::cout<<"("<<x_<<", "<<y_<<")"<<std::endl;
    }
    friend class RePtr;
private:
    int x_;
    int y_;
};

class RefPtr
{

    friend class SmartPtr;
    RefPtr(Point* ptr)
        :p_(ptr), count(1)
    {}
    ~RefPtr()
    {
        free(p_);
    }


    int count;
    Point* p_;
};

class SmartPtr
{
public:
    SmartPtr(Point* ptr)
        :rp_(new RefPtr(ptr))
    {}
    SmartPtr(const SmartPtr& rhs)
        :rp_(rhs.rp_)
    {
        ++rp_->count;
    }
    SmartPtr& operator=(const SmartPtr& rhs)
    {
        ++rhs.rp_->count;
        if(--rp_->count == 0)
        {
            free(rp_);
        }
        rp_ = rhs.rp_;
        return *this;
    }
    ~SmartPtr()
    {
        if(--rp_->count == 0)
        {
            free(rp_);
        }
    }

private:
    RefPtr *rp_;
};

int main(void)
{
    Point* p1 = new Point(10, 8);
    p1->print();
#if 1
    SmartPtr sp1(p1);
    sp1.rp_->p_->print();

    SmartPtr sp2(sp1);
    sp2.rp_->p_->print();

    Point* p2 = new Point(5, 5);
    p2->print();

    SmartPtr sp3(p2);
    sp3.rp_->p_->print();

    sp3 = sp1;
    sp3.rp_->p_->print();
#endif
    return 0;
}

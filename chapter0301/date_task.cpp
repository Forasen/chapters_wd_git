/*************************************************************************
> File Name: date_task.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Fri 12 Jun 2015 09:28:41 PM CST
************************************************************************/

#include<iostream>
#include<stdio.h>

#define ISYEAP(x) (x%4==0)&&(x%100==0) || (x%400==0) ? 1 : 0

class date
{
private:
    int year_;
    int month_;
    int day_;
    int dayofmonth[13][2] =
    {

        {0, 0},
        {31, 31},
        {28, 29},
        {31, 31},
        {30, 30},
        {31, 31},
        {30, 30},
        {31, 31},
        {31, 31},
        {30, 30},
        {31, 31},
        {30, 30},
        {31, 31}
    };

public:
    date(int y=0, int m=0, int d=0)
        :year_(y), month_(m), day_(d)
    {
        std::cout<<"constructor has been called!"<<std::endl;
    }

    void set_date(int y=0,int m=0, int d=0)
    {
        year_ = y;
        month_ = m;
        day_ = d;
        std::cout<<"set_date has been called"<<std::endl;
    }

    void add_date(int val)
    {
        day_++;
        if(day_ > dayofmonth[month_][ISYEAP(year_)])
        {
            day_ = 1;
            month_++;
            if(month_ > 12)
            {
                month_ = 1;
                year_++;
            }
        }
        std::cout<<"add_date has been called"<<std::endl;
    }

    void print()
    {
        std::cout<<"date:"<<year_<<"-"<<month_<<"-"<<day_<<std::endl;
    }
};

int main(void)
{
    date d(2015, 6, 12);
    d.print();

    date d1(2015, 8, 31);
    std::cout<<"before set!"<<std::endl;
    d1.print();
    d1.add_date(1);
    std::cout<<"after set!"<<std::endl;
    d1.print();

    date d2(2015, 1, 1);
    std::cout<<"before set!"<<std::endl;
    d2.print();
    std::cout<<std::endl;
    std::cout<<"after set!"<<std::endl;
    d2.set_date(3000, 10, 10);
    d2.print();

    return 0;
}

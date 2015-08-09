/*************************************************************************
    > File Name: date_task_official.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 10:36:34 PM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>

class date
{
private:
    int year_;
    int month_;
    int day_;
    void ensure_validate()
    {
        if(year_<1000 || year_>9999)
        {
            year_ = 1970;
        }
        if(month_<1 || month_>12 )
        {
            month_ = 1;
        }
        if(day_<1 || day_>31)
        {
            day_ = 1;
        }
    }
public:
    date(int year=1970, int month=1, int day=1)
        :year_(year), month_(month), day_(day)
    {
        std::cout<<"constructor has been called"<<std::endl;
    }
    void set_date(int year=1970, int month=1, int day=1)
    {
        year_ = year;
        month_ = month;
        day_= day;

        ensure_validate();
    }
    void set_year(int year)
    {
        year_ = year;

        ensure_validate();
    }
    void set_month(int month)
    {
        month_ = month;

        ensure_validate();
    }
    void set_day(int day)
    {
        day_ = day;

        ensure_validate();
    }
    
    void show_date()
    {
        std::cout<<std::setw(4)<<std::setfill('0')<<year_<<"-"<<std::setw(2)<<std::setfill('0')<<month_<<"-"<<std::setw(2)<<std::setfill('0')<<day_<<std::endl;
    }

    date& operator ++()
    {
        ++day_;
        if(day_ > 31)
        {
            day_ = 1;
            month_++;
            if(month_ > 12)
            {
                month_ = 1;
                year_++;
            }
        }
    }
    date operator ++(int)
    {
        //date *pdate = new date(year_, month_, day_);
        //++(*this);
        //return *pdate;
        date ret(*this);
        ++*this;
        return ret;
    }
};

int main(void)
{
    date d1;
    d1.show_date();

    d1.set_date(2020, 2, 6);
    d1.show_date();

    ((++d1)++);
    d1.show_date();

    return 0;
}

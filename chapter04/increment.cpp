/*************************************************************************
    > File Name: increment.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 11:04:15 PM CST
 ************************************************************************/

#include<iostream>

class increment
{
private:
    int* beg_;
    int* curr_;
    int* end_;
public:
    increment(int* b, int* e)
        :beg_(b), curr_(b), end_(e)
    {

    }
    increment& operator ++();
    increment& operator --();

    increment operator ++(int);
    increment operator --(int);
};

increment& increment::operator ++()
{
    if(curr == end_)
    {
        throw out_of_range
        (
            "increment past the end of increment"
        );
    }
    ++curr_;
    return *this;
}
increment& increment::operator --()
{
    if(curr == beg_)
    {
        throw out_of_range
        (
            "decrement past the beginning of increment"
        );
    }
    --curr_;

    return *this;
}

increment increment::operator ++(int)
{
    increment ret(*this);
    ++(*this);
    return ret;
}
increment increment::operator --(int)
{
    increment ret(*this);
    --(*this);
    return ret;
}

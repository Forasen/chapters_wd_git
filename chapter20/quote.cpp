/*********************************************
> File  : quote.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 30 Jun 2015 07:34:08 AM CST
 ********************************************/

#include<iostream>

class Quote
{
     virtual ~Quote() = default;
};

int main(void)
{
    Quote* qt = new Quote();
    delete qt;
    qt = new Bulk_quote;
    delete qt;

    return 0;
}

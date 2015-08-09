/*****************************************************
    > File  : sales_item.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 07:48:10 AM CST
 ****************************************************/

#include<iostream>

class Sales_item
{
private:
    int book;
public:
    Sales_item& move(int r, int c);
    Sales_item& set(char ch);
};

Sales_item& Sales_item::move(int r, int c)
{

}
Sales_item& Sales_item::set(char ch)
{
    contents[cursor] =  c;
    return *this;
}
Sales_item& Sales_item::move(int r, int c)
{
    int row = r * width;
    cursor = row + c;
    return *this;
}

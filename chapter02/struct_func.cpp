/*************************************************************************
    > File Name: struct_func.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 03:06:05 PM CST
 ************************************************************************/

#include<iostream>

class point
{
private:
    int xpos;
    int ypos;
public:
    point(int x, int y)
    {
        std::cout<<"without args:"<<std::endl;
        this->xpos = x;
        this->ypos = y;
    }
    point()
    {
        std::cout<<"with args:"<<std::endl;
        this->xpos = 0;
        this->ypos = 0;
    }
    void print()
    {
        std::cout<<"xpos:"<<xpos<<" "<<"ypos:"<<ypos<<std::endl;
    }
};

int main(void)
{
    point pt(3, 4);
    pt.print();

    point pt1;
    pt1.print();

    return 0;
}

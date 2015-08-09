/*************************************************************************
    > File Name: rectangle.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 02:30:54 PM CST
 ************************************************************************/

#include<iostream>

class rectangle
{
private:
    float length;
    float width;
public:
    void rectangle(float len=0.0f, float wid=0.0f)
    {
        this->length = len;
        this->width = wid;
    }
    float area()
    {
        return this->length * this->width;
    }
};

int main(void)
{
    rectangle rect(3.0, 4.0);
    std::cout<<"rect.area="<<rect.area<<std::endl;

    return 0;
}

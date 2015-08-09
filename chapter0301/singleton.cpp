/*************************************************************************
    > File Name: singleton.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 05:13:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<iostream>

class singleton
{
public:
    static singleton* create_singleton(int x=0, int y=0)
    {
        if(psingleton == NULL)
        {
            psingleton = new singleton();
        }
        return psingleton;
        std::cout<<"create_singleton has been called"<<std::endl;
    }

private:
    singleton(int x=0, int y=0)
        :x_(x), y_(y)
    {
        std::cout<<"constructor has been called!"<<std::endl;
    }

    void  print()
    {
        std::cout<<"x_="<<x_<<", "<<"y_="<<y_<<std::endl;
    }
    int x_;
    int y_;
    static singleton* psingleton;
};

singleton* singleton::psingleton = NULL;

int main(void)
{
    singleton *s1 = singleton::create_singleton(4, 5);
    singleton *s2 = singleton::create_singleton(20, 30);
    printf("s1=%x\n", s1);
    printf("s2=%x\n", s2);

    return 0;
}

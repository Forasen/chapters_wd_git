/*************************************************************************
    > File Name: singleton_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 09:11:02 PM CST
 ************************************************************************/

#include<iostream>
#include<stdio.h>

class instance
{
private:
    int x_;
    int y_;
    static instance* pinstance;
    instance(int x=1, int y=1)
        :x_(x), y_(y)
    {
        std::cout<<"constructor has been called"<<std::endl;
    }
public:
    static instance* create_instance(int x=0, int y=0)
    {
        std::cout<<"create_instance has been called"<<std::endl;
        if(pinstance == NULL)
        {
            pinstance = new instance();
        }
        return pinstance;
    }
};

instance* instance::pinstance = NULL;

int main(void)
{
    //instance *p1 = instance::create_instance(22, 333);
    instance *p2 = instance::create_instance(33, 555);
    instance *p3 = instance::create_instance(55, 666);
    //printf("p1=%x\n", p1);
    printf("p2=%x\n", p2);
    printf("p3=%x\n", p3);

    return 0;
}

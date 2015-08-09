/*************************************************************************
> File Name: singleton.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Fri 12 Jun 2015 04:23:44 PM CST
************************************************************************/

#include<iostream>
#include<stdio.h>

class singleton
{
public:
    static singleton* create_instance(int x=0, int y=0)
    {
        if(pinstance == NULL)
        {
            pinstance = new singleton();
        }
        //return new singleton();//heap object
        return pinstance;
    }
private:
    singleton(int x=0, int y=0)
        :x_(x), y_(y)
    {
        std::cout<<"constructor has been called!"<<std::endl;
    }
    static singleton* pinstance;
    int x_;
    int y_;

};
#if 0
void func()
{
    singleton s1;
}
#endif

singleton* singleton::pinstance = NULL;

int main(void)
{
    //singleton *p = new singleton();//
    singleton *p1 = singleton::create_instance(1, 2);
    singleton *p2 = singleton::create_instance(3, 4);
    singleton *p3 = singleton::create_instance(5, 6);
    printf("p1=%x\n", p1);
    printf("p2=%x\n", p2);
    printf("p3=%x\n", p3);

    return 0;
}

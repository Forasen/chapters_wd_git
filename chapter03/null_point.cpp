/*************************************************************************
    > File Name: null_point.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Fri 12 Jun 2015 03:56:16 PM CST
 ************************************************************************/

#include<iostream>

class null_point_call
{
private:
    static int istatic_;
    int itest_;
public:
    static void test1();
    void test2();
    void test3(int itest);
    void test4();
};

int null_point_call::istatic_ = 10;
void null_point_call::test1()
{
    std::cout<<"istatic_="<<istatic_<<std::endl;
}
void null_point_call::test2()//possess history pointer
{
    std::cout<<"very cool!"<<std::endl;
}
void null_point_call::test3(int itest)
{
    std::cout<<"itest="<<itest<<std::endl;
}
void null_point_call::test4()
{
    std::cout<<"itest_ "<<itest_<<std::endl;
}

int main(void)
{
    null_point_call *p = NULL;
    p->test1();
    p->test2();
    p->test3(33);
    p->test4();

    return 0;
}

/*****************************************************
    > File  : pointer.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 08:46:58 PM CST
 ****************************************************/

#include<iostream>

class T
{
private:
    int* tmp_;
public:
    explicit T(int* p)
        :tmp_(p)
    {

    }
};

int main(void)
{
    int a = 10;
    T t1 = &a;
    T t2(&a);

    return 0;
}

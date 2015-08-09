/*********************************************
> File  : numbered.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 10:39:26 AM CST
********************************************/

#include<iostream>

class numbered
{
    public:

    numbered()
    {
        myNum = num_++;
    }
    numbered(const numbered& rhs) = default;
    #if 0
    {
        myNum = num_++;
    }
    #endif
    numbered& operator=(const numbered& rhs) = default;
    //numbered& operator=(const numbered& rhs) = delete;

    ~numbered() = default;
    int myNum;
    private:
    static int num_;
};
numbered::~numbered()
{
    std::cout<<"~numbered()"<<std::endl;
}
int numbered::num_ = 0;

void f(numbered& s)
//void f(numbered s)
{
    std::cout<<"s.myNum = "<<s.myNum<<std::endl;
}

int main(void)
{
    numbered a, b = a, c = b;
    //numbered d;
    //d = a;
    f(a);
    f(b);
    f(c);

    return 0;
}

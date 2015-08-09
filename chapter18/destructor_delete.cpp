/*********************************************
> File  : destructor_delete.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 11:20:48 AM CST
********************************************/

#include<iostream>

class NoDoctor
{
    public:
#if 1
    NoDoctor(int ival1)
        :ival(ival1)
    {
        std::cout<<"NoDoctor()"<<std::endl;
    }
#endif
    //~NoDoctor() = delete;
#if 0
    {
        std::cout<<"~NoDoctor()"<<std::endl;
    }
#endif
    void print()
    {
        std::cout<<"print() : ival = "<<ival<<std::endl;
    }
    //~NoDoctor() = default;
#if 0
    NoDoctor& operator=(const NoDoctor& rhs)
    {
        std::cout<<"NoDoctor& operator=(const NoDoctor& rhs)"<<std::endl;
        ival = rhs.ival;
        return *this;
    }
#endif

private:
    const int ival;
};

int  main(void)
{
    //NoDoctor nd;
    //NoDoctor* nd  = new  NoDoctor(10);
    
    //delete nd;
    NoDoctor nd1(100);
    //NoDoctor nd2 = nd1;
    NoDoctor nd();
    std::cout<<std::endl;
    //nd2.print();
    nd1.print();
    return 0;
}


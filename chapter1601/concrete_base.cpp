/*********************************************
> File  : concrete_base.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 25 Jun 2015 07:05:52 AM CST
********************************************/

#include<iostream>

class Base
{
    public:
    Base(std::string isbn_)
    {
        std::cout<<"Base(std::string isbn)"<<std::endl;
    }
    static void  statMem()
    {
        std::cout<<"Hello World!"<<std::endl;

    }
//private:
    protected:
    std::string isbn_;

};
class Derived: public Base
{
    public:
    Derived(std::string& isbn_ = "", std::string bulk)
        :Base(isbn_), bulk_(bulk)
    {
        std::cout<<"Derived(std::string bulk)"<<std::endl;
    }
    void func(const Derived&);
    void print()
    {
        //std::cout<<""
    }
private:
//protected:
    std::string bulk_;
};

void Derived::func(const Derived& derived_obj)
{
    std::cout<<"Base::statMem() : ";
    Base::statMem();
#if 0
    std::cout<<"Derived::statMem() : ";
    Derived::statMem();

    std::cout<<"derived_obj.statMem() : ";
    derived_obj.statMem();

    std::cout<<"statMem() : ";
    statMem();
#endif
}

int main(void)
{
    Derived d1("hello", "world");
    //Derived d2;
    d1.func(d1);

    //Base* base = &d1;
    //Derived* bulkP = &base;
    return 0;
}

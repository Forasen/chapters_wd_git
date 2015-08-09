/*********************************************
> File  : function.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 02:52:42 PM CST
 ********************************************/

#include<iostream>
#include<functional>
using namespace std;
struct Foo
{
    Foo(int num)
        :num_(num)
    {

    }
    void print_add(int i) const
    {
        std::cout<<"num_ + i : "<<num_+i<<"\n";
    }
    int num_;
};

void print_num(int i)
{
    std::cout<<"i : "<<i<<"\n";
}
struct PrintNum
{
    void operator()(int i) const
    {
        std::cout<<"i : "<<i<<"\n";
    }
};

int main(void)
{
    std::function<void(int)> f_display = print_num;
    f_display(10);

    std::function<void(const Foo&, int)>
        f_add_display = &Foo::print_add;
    const Foo foo(314159);
    f_add_display(foo, 1);

    //函数对象，在传递值时必须在对象后面加上括弧
    std::function<void(int)> f_display_obj = PrintNum();
    f_display_obj(18);


    std::cout<<std::endl;

    //std::function<void()> f_display_31337 = 
    auto f_display_31337 = 
        std::bind(print_num, 31337);
    f_display_31337();

    std::function<void(int)> f_add_display2 = 
        std::bind(&Foo::print_add, foo, std::placeholders::_1);
    f_add_display2(10);

    std::function<void(int)> f_add_display3 =
        std::bind(&Foo::print_add, &foo, std::placeholders::_1);
    f_add_display3(20);

    return 0;
}

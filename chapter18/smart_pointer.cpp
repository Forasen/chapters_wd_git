/*********************************************
> File  : smart_pointer.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 11:16:19 PM CST
 ********************************************/

#include<iostream>
#include<memory>
#include<vector>
#include<cstring>
using namespace std;

int main(void)
{
    shared_ptr<std::string> p1 = make_shared<std::string>("hello");
    std::cout<<"p1.use_count() = "<<p1.use_count()<<std::endl;

    shared_ptr<std::string> p2 = make_shared<std::string>(10, '9');
    p2 = p1;
    std::cout<<"p2.use_count() = "<<p2.use_count()<<std::endl;

    shared_ptr<int> p3 = make_shared<int>();
    auto p4 = make_shared<int>();
    auto q(p4);
    auto r = make_shared<int>(42);
    r = q;

    return 0;
}

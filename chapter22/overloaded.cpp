/*********************************************
> File  : overloaded.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 07:58:21 PM CST
 ********************************************/

#include<iostream>

class String
{
    friend String& operator+(const String& rhs);
public:
    String() = default;
//private:
public:
    std::string str_;
};

std::string& operator+(const String& lhs, const String& rhs)
{
    std::string tmp = lhs.str_ + rhs.str_;
    //return (lhs.str_ + rhs.str_);
    return tmp;
}
int main(void)
{
    std::string s = "world";
    std::string s1 = ", hello!";
    //std::string t = s + "!";

    
    std::string u = s + s1;
    std::cout<<"u = "<<u<<std::endl;
    return 0;
}

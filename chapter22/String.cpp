/*********************************************
> File  : String.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 09:43:34 PM CST
 ********************************************/

#include<iostream>

class String
{
    friend std::operator<(const String& lhs, const String& rhs);
    friend std::ostream& operator<<(std::ostream& os, const String& rhs);
public:
    String() = default;
    String(const char* str);




private:
    char* str_;
};

std::operator<(const String& lhs, const String& rhs)
{
    return strcmp(lhs.str_, rhs.str_) < 0;
}
std::operator<=(const String& lhs, const String& rhs)
{
    return strcmp(lhs.str_, rhs.str_) <= 0;
}
std::ostream& operator<<(std::ostream& os, const String& rhs)
{
    os<<rhs;
    return os;
}

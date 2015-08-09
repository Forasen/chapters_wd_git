/*********************************************
> File  : String.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 04:05:47 PM CST
 ********************************************/

#include<iostream>
#include<cstring>

class String
{
private:
    char* pstr_;
public:
    String()
    {
        pstr_ = new char[1];
    }
    String(const char* pstr)
    {
        pstr_ = new char[strlen(pstr) + 1];
        strcpy(pstr_, pstr);
    }
    String& String(const String& rhs)
    {
        pstr_ = char[strlen(rhs.pstr_) + 1];
        strcpy(pstr_, rhs.pstr_);
    }
    String& operator=(const String& rhs)
    {
        String tmp(rhs);
        std::string tmp_str = rhs.pstr_;
        rhs.pstr_ = pstr_;
        pstr_ = tmp_str;
    }
    ~String()
    {
        std::cout<<"~String()"<<std::endl;
        delete []pstr_;
    }
    String(String&& rhs)
    {
        pstr_ = rhs.pstr_;
        rhs.pstr_ = NULL;
    }
    String&& operator=(const String&& rhs)
    {
        std::cout<<"String&& operator=="<<std::endl;
        if(this == &rhs)
        {
            delete []pstr_;
            pstr_ = NULL:
            pstr_ = rhs.pstr_;
        }
        return *this;
    }
};

String String::getStr()
{
    {
        String s1 = "hello";
        return s1;
    }
}
String operator+(const String& lhs, const String& rhs)
{
    std::cout<<"String operator+(const String& lhs,  const String& rhs)"<<std::endl;
    String
}
int main(vodi)
{
    String s2 = getStr();

    return 0;
}

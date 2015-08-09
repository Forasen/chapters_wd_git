/*********************************************
> File  : rvalue_reference.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 05:08:11 PM CST
 ********************************************/

#include<iostream>

class String
{
private:
    char* pstr_;

public:
    String(const String&& rhs)
    {
        strcpy(pstr_, rhs.pstr_);
        rhs.pstr_ = NULL;
    }
    String& operator=(const String&& rhs)
    {
        if(this != &rhs)
        {
            delete []pstr_;
            strcpy(pstr_, rhs.pstr_);
            rhs.pstr_ = NULL;

        }
    }
    String::String(const char* );
    String::String(const String &);
    String::~String();
};

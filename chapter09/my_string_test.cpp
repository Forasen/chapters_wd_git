/*********************************************
> File  : my_string_test.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 19 Jun 2015 07:43:43 AM CST
********************************************/

#include<iostream>
#include<cstring>
#include<stdio.h>

class String
{
    private:
    char* pstr_;
    public:
    String();
    String(const char* str);
    ~String();
    String& operator =(const String &rhs);

    const char* c_str() const 
    {
        return pstr_;
    }
    int use()
    {
        int len = strlen(pstr_);
        return pstr_[len+1];
    }
    char& operator [](int index);
    friend std::ostream& operator <<(std::ostream &os, String& rhs);
};

std::ostream& operator <<(std::ostream &os, String &rhs)
{
    os << rhs.pstr_;
    return os;
}

String::String()
{
    pstr_ = new char[2];
    pstr_[1] = 1;
}

String String::(const char* str)
{
    int len = strlen(str);
    pstr_ = new char[len+2];
    pstr_[len+1] = 1;
    strcpy(pstr_, str);
}

String& String::operator=(const String &rhs)
{
    if(*this != rhs)
    {
        int len = strlen(pstr_);
        if(pstr_[len+1]==1)
        {
            delete []pstr_;
            pstr_ = NULL;
        }
        //是否有必要！
        pstr_ = new char[strlen(rhs.pstr_) + 2];
        strcpy(pstr_, rhs.pstr_);
        int len = strlen(pstr_);
        pstr_[len+1]++;
    }
    return *this;
}

String::~String()
{
    int len = strlen(pstr_);
    if(pstr_[len + 1] == 1)
    {
        delete []pstr_;
    }
}

char* operator[](int index)
{

}

/*********************************************
> File  : String.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 08:46:28 AM CST
********************************************/

#include<iostream>
#include<cstring>
#include<list>
#include<vector>

class String
{
    private:
    char* str_;
    public:
    String()
    {
        str_ = NULL;
    }
    String(const char* str)
    {
        str_ = new char[strlen(str) + 1];
        strcpy(str_, str);
    }
    ~String()
    {
        std::cout<<"~String()"<<std::endl;
        if(str_)
        {
            free(str_);
        }
    }
    String(const String& rhs)
    {
        std::cout<<"Copy constructor is called! ret : "<<rhs.str_<<std::endl;
        str_ = new char[strlen(rhs.str_) + 1];
        strcpy(str_, rhs.str_);
    }
    String& operator=(const String& rhs)
    {
        if(this != &rhs)
        {
            std::cout<<"Assign constructor is called! ret : "<<rhs.str_<<std::endl;
            String tmp(rhs);
            char* tmp_ch = tmp.str_;
            tmp.str_ = str_;
            str_ = tmp_ch;
        }
        return *this;
    }
    String(String&& rhs)
    {
        std::cout<<"Move Constructor is called! ret : "<<rhs.str_<<std::endl;
        str_ = new char[strlen(rhs.str_) + 1];
        str_ = rhs.str_;
        //strcpy(str_, rhs.str_);
        rhs.str_ = NULL;
    }

    String& operator=(String&& rhs)
    {
        std::cout<<"Move Assign is called! ret : "<<rhs.str_<<std::endl;
        if(this != &rhs)
        {
            String tmp(rhs);
            char* tmp_ch = tmp.str_;
            tmp.str_ = str_;
            str_ = tmp_ch;
            rhs.str_ = NULL;
        }
        return *this;
    }
};


int main(void)
{

    String a;
    a = String("hello");

    std::list<String> li;
    li.push_back(String("world"));

    String c = "how are you";
    li.push_back(c);

    return 0;
}


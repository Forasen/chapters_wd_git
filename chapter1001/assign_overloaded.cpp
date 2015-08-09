/*********************************************
    > File  : assign_overloaded.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 02:25:06 PM CST
 ********************************************/

#include<iostream>

class String

public:
    String(char* str=NULL);
    String(const String& rhs);
    ~String();

    String& operator=(const String& rhs);

private:
    char* pstr_;
};

String::String(char* str)
{
    if(str)
}


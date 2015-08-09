/*****************************************************
    > File  : subscript.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Wed 17 Jun 2015 02:48:32 PM CST
 ****************************************************/

#include<iostream>
#include<cstring>

class charArray
{
private:
    int len_;
    char* pbuf_;
public:
    charArray(int size)
        :len_(size)
    {
        pbuf_ = new char[len_];
    }
    ~charArray()
    {
        delete pbuf_;
    }
    int getLen()
    {
        return len_;
    }
    char& operator[](int index);
};

char& charArray::operator[](int index)
{
    static char Null = '\0';
    if(index<len_ || index>=0)
    {
        return pbuf_[index];
    }
    else
    {
        std::cout<<"超出下标范围！"<<std::endl;
        return Null;
    }
};


int main(void)
{
    char* pstr = "Hello World!";
    int len = strlen(pstr) + 1;
    charArray ca(len);

    for(int index=0; index<len; index++)
    {
        ca[index] = pstr[index];
    }

    for(int index=0; index<len; index++)
    {
        std::cout<<"ca[index]="<<ca[index]<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<"s1>>"<<std::endl;
    std::string s1 = "wangdao";

    for(int index=0; index<s1.size(); index++)
    {
        std::cout<<s1[index]<<std::endl;
    }

    return 0;
}

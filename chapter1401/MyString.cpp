/*********************************************
> File  : MyString.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 23 Jun 2015 10:24:28 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<cstring>

class MyString
{
private:
    char* data_;
    int len_;
    void init_data(const char* str)
    {
        data_ = new char[len_+1];
        strcpy(data_, str);
        //data_ = '\0';
    }
public:
    MyString()
    {
        data_ = NULL;
        len_ = 0;
    }

    MyString(const char* str)
    {
        len_ = strlen(str);
        init_data(str);
    }
    MyString(const MyString& str)
    {
        len_ = str.len_;
        init_data(str.data_);
        std::cout<<"Copy Constructor is called! source : "<<str.data_<<std::endl;
    }
    MyString& operator=(const MyString& rhs)
    {
        if(this != &rhs)
        {
            len_ = rhs.len_;
            init_data(rhs.data_);
        }
        std::cout<<"Assignment is called! source : "<<rhs.data_<<std::endl;

        return *this;
    }
    ~MyString()
    {
        if(data_)
        {
            free(data_);
        }
    }

    MyString(MyString&& str)
    {
        std::cout<<"Move Constructor is called! source : "<<str.data_<<std::endl;
        len_ = str.len_;
        data_ = str.data_;
        str.len_ = 0;
        str.data_ = NULL;
    }

    
    MyString& operator=(MyString&& rhs)
    {
        std::cout<<"Move Assignment is called! source : "<<rhs.data_<<std::endl;
        if(this != &rhs)
        {
            len_ = rhs.len_;
            data_ = rhs.data_;
            rhs.len_ = 0;
            rhs.data_ = NULL;
        }
        return *this;
    }
};

int main(void)
{
    MyString s;
    s = MyString("hello");
    
    std::vector<MyString> vec;
    vec.push_back(MyString("world"));
}

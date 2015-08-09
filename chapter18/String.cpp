/*********************************************
> File  : String.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 09:50:12 PM CST
 ********************************************/

#include<iostream>

class String
{
private:
    std::string str_;
public:
    String() = default;
    String(std::string str)
        :str_(str)
    {}
    String& mend(char ch)
    {
        str_[0] = ch;
        return *this;
    }
    String& print() const
    {
        std::cout<<"String& print() const";
        std::cout<<str_<<std::endl;
        return *this;
    }
    String& print()
    {
        std::cout<<"String& print()";
        std::cout<<str_<<std::endl;
        return *this;
    }
    ~String()
    {
        std::cout<<"~String()"<<std::endl;
    }
};

int main(void)
{
    String s1("hello");
    s1.print();

    //String* ps = new String("world");
    const String s2("world");
    s2.print();

    return 0;
}

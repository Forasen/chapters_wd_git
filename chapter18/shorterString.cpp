/*********************************************
> File  : shorterString.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 08:40:26 PM CST
 ********************************************/

#include<iostream>
#include<cstring>
class
const std::string& shorterString(const std::string& lhs, const std::string& rhs)
{
    return (lhs.size() < rhs.size() ? lhs : rhs);
}
char& getValue(std::string& str, std::string::size_type ix)
{
    return str[ix] = 'A';
}

int main(void)
{
    std::string str = "hello";
    getValue(str, 0);

    std::cout<<"ret : "<<str<<std::endl;
#if 1
    std::string str1, str2;
    std::cout<<"Enter two strings: "<<std::endl;
    std::cin>>str1>>str2;
    std::cout<<shorterString(str1, str2)<<std::endl;

    std::cout<<"the shorter size = "<<shorterString(str1, str2).size()<<std::endl;
    std::string str = shorterString(str1, str2)[0] = 'A';
    std::cout<<"after mending……"<<str<<std::endl;
#endif

    return 0;
}

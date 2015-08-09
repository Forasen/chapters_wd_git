/*********************************************
> File  : copy_assign.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 08:09:21 PM CST
 ********************************************/

#include<iostream>
#include<cstring>

class Test
{
public:
    Test()
    {
        str_[0] = '\0';
        std::cout<<"Test()"<<std::endl;
    }
    Test(const char* str)
    {
        std::cout<<"Test(char* str)"<<std::endl;
        strcpy(str_, str);
    }
    Test& operator=(const Test& rhs)
    {
        std::cout<<"Test& operator=(const Test& rhs)"<<std::endl;
        strcpy(str_, rhs.str_);
        return *this;
    }
//private:
    Test(const Test& rhs)
    {
        std::cout<<"Test(const Test& rhs)"<<std::endl;
        strcpy(str_, rhs.str_);
    }

private:
    char str_[128];
};

int main(void)
{
    std::cout<<"t1 : ";
    Test t1("hello");

    std::cout<<"t2 : ";
    Test t2 = "hello";

    std::cout<<"t3 : ";
    Test t3 = t1;

    std::cout<<"t4 : ";
    Test t4 = Test();
    
    std::cout<<"t5 : ";
    Test t5(t1);

    return 0;
}

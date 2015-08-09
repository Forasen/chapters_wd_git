/*********************************************
    > File  : my_string.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 03:49:33 PM CST
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
    String(const String &rhs);
    String& operator =(const String &rhs);
    ~String();

    const char* c_str() const{
        return pstr_;
    }
    int use()
    {
        int len = strlen(pstr_);
        return pstr_[len+1];
    }


    char & operator[](int index);
    //使用const的前提是String对象也必须为const
    //const char & operator [](int index) const;
    friend std::ostream & operator<<(std::ostream &os, String &rhs);
};

std::ostream& operator <<(std::ostream &os, String &rhs)
{
    os << rhs.pstr_;
    return os;
}


String::String(const char* str)
{
    int len = strlen(str);
    pstr_ = new char[len + 2];//注意了
    pstr_[len + 1] = 1; 
    strcpy(pstr_, str);
}


String::String()
{
    pstr_ = new char[2];
    pstr_[1] = 1;
}

String::String(const String &rhs)
{
    int len = strlen(rhs.pstr_);
    pstr_ = rhs.pstr_;//共享内存空间
    pstr_[len+1]++;//引用基数加一
}

String & String::operator=(const String &rhs)
{
    if(this != &rhs)
    {
        int len = strlen(pstr_);
        if((pstr_[len+1]--) == 0)
        {
            delete []pstr_;
        }
        pstr_ = rhs.pstr_;//共享内存空间
        len = strlen(pstr_);
        pstr_[len+1]++;//复制之后引用计数加一
    }
    return *this;
}

String::~String()
{
    int len  = strlen(pstr_);
    if(--pstr_[len+1] == 0)
    {
        std::cout<<"delete []pstr_"<<std::endl;
        delete []pstr_;
    }
}
//该函数无法区分是读操作还是写操作，
//当有多个对象共享内存时即使是发生了读操作
//也会导致内存的拷贝
char & String::operator[](int index)
{
    //判断范围很重要的！
    static  char nullchar = '\0';
    int len = strlen(pstr_);
    if(index >= 0 || index < len)
    {
        if(--pstr_[len+1] != 0)//当为2各对象时的处理
        {
            char* pTmp = pstr_;//备份

            pstr_ = new char[len+2];
            strcpy(pTmp, pstr_);
            pstr_ = pTmp;
            pTmp[len+1] = 1;
        }
        else
        {
            ++pstr_[len+1];//只有一个对象指向一段内存
        }
        return pstr_[index];
    }
    else//引用计数为0
    {
        std::cout<<"illegal argument"<<std::endl;
        return nullchar;
    }
    
}
int main(void)
{
    String s1;
    std::cout<<"s1:"<<s1<<std::endl;
    String s2 = "hello world!";
    std::cout<<"s2:"<<s2<<", use="<<s2.use()<<std::endl;

    String s3 = s2;
    std::cout<<"s3:"<<s3<<", use="<<s3.use()<<std::endl;

    const char* ps2 = s2.c_str();
    const char* ps3 = s3.c_str();
    printf("ps2=%x\n", ps2);
    printf("ps3=%x\n", ps2);

    s3[0] = 'x';//发生写操作

    std::cout<<"s3修改之后"<<std::endl;
    std::cout<<"s2:"<<s2<<", use="<<s2.use()<<std::endl;
    std::cout<<"s3:"<<s3<<", use="<<s3.use()<<std::endl;
    ps3 = s3.c_str();
    printf("ps2=%x\n", ps2);
    printf("ps3=%x\n", ps2);

    std::cout<<s3[0]<<std::endl;//只发生读操作
    std::cout<<"s3读之后"<<std::endl;
    std::cout<<"s2:"<<s2<<", use="<<s2.use()<<std::endl;
    std::cout<<"s3:"<<s3<<", use="<<s3.use()<<std::endl;
    ps3 = s3.c_str();
    printf("ps2=%x\n", ps2);
    printf("ps3=%x\n", ps2);


    //const String s4 = "zhongguo";
    //s4[0];
    return 0;
}


/*********************************************
> File  : copy_constructor.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 26 Jun 2015 10:36:33 PM CST
********************************************/

#include<iostream>

class HasPtr
{
    public:
    HasPtr(const std::string& s = std::string())
    :ps(new std::string(s)), i(0)
    {

    }
    HasPtr(const HasPtr& rhs)
    {
        ps = new std::string(*rhs.ps);
        i = rhs.i;
    }
    HasPtr& operator=(const HasPtr& rhs)
    {
        if(this != &rhs)
        {
            ps = rhs.ps;
            i = rhs.i;
        }
        return *this;
    }
    int* p1 = malloc(25*sizeof(int));
    if(p1 == NULL)
    {
        exit(1);
    }
    for(int i=0; i<25; i++)
    {
        *pi++ = 0;
    }
    for(int i=0; i<25; i++)
    {
        pi[i] = 0;
    }
    private:

    std::string *ps;
    int i;
};

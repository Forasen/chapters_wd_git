/*********************************************
> File  : equal_operator.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 01 Jul 2015 11:15:55 PM CST
 ********************************************/

#include<iostream>

class StrVec
{
    friend bool operator==(const StrVec& lhs, const StrVec& rhs);
    friend bool operator!=(const StrVec& lhs, const StrVec& rhs);
};

bool operator==(const StrVec& lhs, const StrVec& rhs)
{
    if(lhs.size() != rhs.size())
    {
        return false;
    }
    for(auto itrL=lhs.begin(), itrR=rhs.begin(); itrL!=lhs.end(), itrR!=rhs.end(); itrL++, itrR++)
    {
        if(itrL != itrR)
        {
            return false;
        }
    }
    return true;
}

bool operator!=(const StrVec& lhs, const StrVec& rhs)
{
    return !(lhs == rhs);
}

class String
{
    friend bool operat
};

class StrBlobPtr
{
    friend bool operator==(const StrBlobPtr& lhs, const StrBlobPtr& rhs);
    friend bool operator!=(const StrBlobPtr& lhs, const StrBlobPtr& rhs);
};

bool operator==(const StrBlobPtr& lhs, const StrBlobPtr& rhs)
{
    auto l = lhs.wptr.lock();
    auto r = rhs.wptr.lock();
    
    if(l == r)
    {
        return (!r || lhs.curr == rhs.curr);
    }
    else
    {
        return false;
    }
}

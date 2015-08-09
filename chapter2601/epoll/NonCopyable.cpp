/*********************************************
> File  : NonCopyable.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 06 Jul 2015 08:55:06 PM CST
 ********************************************/

#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__

class NonCopyable
{
public:
    NonCopyable()
    {

    }
    ~NonCopyable()
    {

    }
private:
    NonCopyable(const NonCopyable& rhs);
    NonCopyable& operator=(const NonCopyable& rhs);
};


#endif

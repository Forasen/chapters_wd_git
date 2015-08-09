/*********************************************
> File  : NonCopyable.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Fri 03 Jul 2015 03:38:27 PM CST
 ********************************************/

#ifndef __WE_NONCOPYABLE_H__
#define __WE_NONCOPYABLE_H__

namespace wd
{
    class NonCopyable
    {
    protected:
        NonCopyable(){}
        ~NonCopyable(){}
    private:
        NonCopyable(const NonCopyable& rhs);
        NonCopyable& operator=(const NonCopyable& rhs);
    };
}

#endif

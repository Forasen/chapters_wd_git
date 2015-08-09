/*********************************************
> File  : range_for.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 02:08:54 PM CST
 ********************************************/

#include<iostream>
#include<vector>

int main(void)
{
    std::vector<int> vec = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };
    for(auto beg=vec.begin(), end=vec.end(); beg!=end; beg++)
    {
        auto& r = *beg;
        r *= 2;
    }
    for(auto &it : vec)
    {
        it *= 2;
    }
    for(auto it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

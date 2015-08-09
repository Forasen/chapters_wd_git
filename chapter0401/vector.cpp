/*************************************************************************
    > File Name: vector.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sat 13 Jun 2015 11:45:05 PM CST
 ************************************************************************/

#include<iostream>

vector::<int>::const_iterator find_val(
    vector<int>::const_iterator beg,
    vector<int>::const_iterator end,
    int value,
    vector<int>::size_type &occurs)
{
    vector<int>::const_iterator res_iter = end;
    for(; beg!=end; beg++)
    {
        if(*beg == value)
        {
            if(res_iter == end)
            {
                res_iter = beg;
            }
            occurs++;
        }
    }
    return res_iter;
}

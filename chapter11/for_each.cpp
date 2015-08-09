/*********************************************
    > File  : for_each.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 02:52:07 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<algorithm>

typedef std::vector<int> VI;
typedef VI::iterator VIP;

void func(VI::value_type v)
{
    std::cout<<v<<" ";
}

int main(void)
{
    int arr[5] =
    {
        1, 2, 3, 4, 5
    };
    VI obV(arr, arr+5);
    for_each(obV.begin(), obV.end(), func);
    std::cout<<std::endl;

    return 0;
}

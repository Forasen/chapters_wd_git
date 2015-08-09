/*********************************************
    > File  : replace_if.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 02:57:42 PM CST
 ********************************************/

#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

typedef std::vector<int> VI;
typedef VI::iterator VIP;

int main(void)
{
    int arr[5] = 
    {
        1, 2, 3, 4, 5
    };
    VI obV(arr, arr+5);
    std::less<int> Lt;
    //std::replace_if(obV.begin(), obV.end(), bind2nd(Lt, 3), 7);
    std::replace_if(obV.begin(), obV.end(), bind1st(Lt, 3), 7);
    for(VIP v=obV.begin(); v!=obV.end(); v++)
    {
        std::cout<<*v<<" ";
    }
    std::cout<<std::endl;

    return 0;

}

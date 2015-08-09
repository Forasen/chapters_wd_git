/*********************************************
    > File  : adapter_func.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 08:51:07 PM CST
 ********************************************/

#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<vector>
using namespace std;

typedef std::vector<int> VI;
typedef VI::iterator VIP;

int main(void)
{
    int arr[] =
    {
        1, 2, 3, 4, 5
    };
    VI obV(arr, arr+5);
    std::less<int> Lt;
    std::replace_if(obV.begin(), obV.end(), std::not1(bind1st(Lt, 3)), 7);

    for(VIP v=obV.begin(); v!=obV.end(); v++)
    {
        std::cout<<*v<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

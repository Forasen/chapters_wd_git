/*********************************************
    > File  : set.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 09:04:24 PM CST
 ********************************************/

#include<iostream>
#include<set>
#include<cstring>


int main(void)
{
    int arr[10] = {1, 2, 2, 3, 4, 5, 6, 6, 7, 7};
    std::multiset<int> obS(arr, arr+10);
    std::cout<<"obS.size()="<<obS.size()<<std::endl;
    
    std::multiset<int>::iterator it = obS.begin();
    while(it!=obS.end())
    {
        std::cout<<*it<<" ";
        it++;
    }
    std::cout<<std::endl;

    return 0;
}

/*********************************************
> File  : generic_find.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 08:04:20 PM CST
 ********************************************/

#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main(void)
{
    int arr[5] = {
        1, 2, 3, 4, 5
    };
    std::vector<int> vec(arr, arr+5);
    vec.reserve(100);
    
    while(vec.size() != vec.capacity())
    {
        vec.push_back(10);
    }
    vec.push_back(99);
    std::cout<<"vec capacity : "<<vec.capacity()<<std::endl;
    std::cout<<"vec size : "<<vec.size()<<std::endl;
    //vec.shrink_to_fit();
    std::cout<<std::endl;
    //std::cout<<"vec capacity : "<<vec.capacity()<<std::endl;

#if 0
    int arr[5] = {
        1, 2, 3, 4, 5
    };
    int arr1[sizeof(arr) / sizeof(*arr)];
    auto ret = std::copy(std::begin(arr), std::end(arr), arr1);
    for(auto it: arr1)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> vec;
    std::vector<int> vec1;
    std::fill_n(back_inserter(vec), 10, 0);
    //auto it = back_inserter(vec);
    //*it = 50;
    for(auto it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl<<std::endl;
    replace_copy(vec.cbegin(), vec.cend(),back_inserter(vec1), 0, 50);
    for(auto it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl<<std::endl;
    for(auto it: vec1)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl<<std::endl;
    int arr[5] = {
        1, 2, 3, 4, 5
    };
    std::vector<int> vec(arr, arr+5);
    for(auto it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;

    //std::fill(vec.begin(), vec.end(), 0);
    //std::fill(vec.begin(), vec.begin()+vec.size()/2, 0);
    std::fill_n(vec.begin(), vec.size(), 0);
    for(auto it: vec)
    {
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
#endif
#if 0
    int val  = 66;
    int* result = std::find(std::begin(arr), std::end(arr), val);
    std::vector<int> vec(arr, arr+5);
    int val = 21;
    auto result = find(vec.begin(), vec.end(), val);
#endif

    //std::cout<<val<<(result == std::end(arr) ? " is not present!" : " is present!")<<std::endl;

    return 0;
}

/*********************************************
> File  : algorithm_generic.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 12:12:45 AM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(void)
{
    int arr[5] = {
        1, 2, 3, 42, 33
    };
    int search_value = 42;
    std::vector<int> vec(arr, arr+5);
    std::vector<int>::const_iterator result = find(vec.begin(), vec.end(), search_value);
    std::cout<<"The value : "<<search_value<<(result==vec.end() ? "is not present" : "is present!")<<std::endl;

    return 0;
}

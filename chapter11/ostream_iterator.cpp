/*********************************************
    > File  : ostream_iterator.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 02:04:47 PM CST
 ********************************************/

#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>

int main(void)
{
    int arr[6] = 
    {
        1, 2, 3, 4, 5, 6
    };
    std::vector<int> obV(arr, arr+6);
    std::ostream_iterator<int, char> osi(std::cout, " ");
    std::copy(obV.begin(), obV.end(), osi);
    std::cout<<std::endl;

    return 0;
}

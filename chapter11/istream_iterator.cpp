/*********************************************
    > File  : istream_iterator.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 02:30:26 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

int main(void)
{
    std::vector<int> obV;
    std::istream_iterator<int, char> isi(std::cin);
    std::copy(isi, std::istream_iterator<int, char>(), back_inserter(obV));

    for(std::vector<int>::iterator it=obV.begin(); it!=obV.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

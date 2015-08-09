/*********************************************
> File  : vector_prefix.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 09:25:07 AM CST
 ********************************************/

#include<iostream>
#include<vector>

int main(void)
{
    //std::vector<int> v1 = {1, 2, 3, 4, 5, 5, 8, 8};
    //std::vector<int> v2 = {1, 2, 3};
    std::vector<int> v1 = {0, 2, 3, 5, 8};
    std::vector<int> v2 = {1, 2, 3};

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();
    //auto it3 = v3.cbegin();
    //auto it4 = v4.cbegin();

    while(it1!=v1.cend() && it2!=v2.cend())
    {
        if(*it1 != *it2)
        {
            std::cout<<"v1和v2之间不存在前缀关系！"<<std::endl;
            break;
        }
        it1++;
        it2++;
    }
    if(it1 == v1.cend())
    {
        std::cout<<"v1是v2的前缀！"<<std::endl;
    }
    if(it2==v2.cend())
    {
        std::cout<<"v2是v1的前缀！"<<std::endl;
    }

    return 0;
}

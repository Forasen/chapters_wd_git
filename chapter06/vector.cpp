/*************************************************************************
> File Name: vector.cpp
> Author: NewYork
> Mail: 2287794993@qq.com 
> Created Time: Mon 15 Jun 2015 03:12:21 PM CST
************************************************************************/

#include<iostream>
#include<vector>

void printSize(std::vector<int> &vec)
{
    std::cout<<"vec.size="<<vec.size()<<std::endl;
    std::cout<<"vec.capacity="<<vec.capacity()<<std::endl;

}

int main(void)
{
    int a = 10;

    std::vector<int> vec;
    printSize(vec);
    vec.push_back(1);
    std::cout<<std::endl;
    printSize(vec);

    vec.push_back(2);
    std::cout<<std::endl;
    printSize(vec);

    vec.push_back(3);
    std::cout<<std::endl;
    printSize(vec);

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(a);//直接进行复制，会调用复制构造函数
    std::cout<<std::endl;
    printSize(vec);


    int size = vec.size();//通过下标进行访问
    for(size_t index=0; index<size; index++)
    {
        std::cout<<vec[index]<<std::endl;
    }

    std::cout<<std::endl;
    vec[5] = 11;

    std::vector<int>::iterator it;//迭代器相当于指针
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }

    std::cout<<"a="<<a<<std::endl;
    return 0;
}

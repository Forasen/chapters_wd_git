/*************************************************************************
    > File Name: arr_reference.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 08:31:21 AM CST
 ************************************************************************/

#include<iostream>

void print_value(int (&arr)[10])
{
    std::cout<<"print_value has been called!"<<std::endl;
    for(size_t index=0; index<10; index++)
    {
        std::cout<<arr[index];
        if(index < 9)
        {
            std::cout<<" ";
        }
    }
    std::cout<<std::endl;
}
void print_value_1(const int arr[], size_t size)
{
    std::cout<<"print_value_1 has been called!"<<std::endl;
    for(size_t index=0; index<size; index++)
    {
        std::cout<<arr[index];
        if(index < size-1)
        {
            std::cout<<" ";
        }
    }
    std::cout<<std::endl;
}

void print_value_2(const int* beg, const int* end)
{
    std::cout<<"print_value_2 has been called!"<<std::endl;
    while(beg != end)
    {
        std::cout<<*beg;
        if(beg != (end-1))
        {
            std::cout<<" ";
        }
        beg++;
    }
    std::cout<<std::endl;
}

int main(void)
{
    int i = 5;
    int j[2] = {
        1, 2
    };

    int k[10] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
#if 1 
    //print_value(&i);
    //print_value(j);
    print_value(k);
#endif

    std::cout<<std::endl;

#if 1
    print_value_1(&i, 1);
    print_value_1(j, 2);
    print_value_1(k, 10);
#endif

    std::cout<<std::endl;
    
#if 1
    print_value_2(&i, &i+1);
    print_value_2(j, j+2);
    print_value_2(k, k+10);
#endif

    return 0;
}

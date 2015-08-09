/*************************************************************************
    > File Name: vector_add.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 09:46:15 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

double vector_add(vector<double>::iterator begin, vector<double>::iterator end)
{
    double sum = 0.0;

    while(begin != end)
    {
        sum += *begin++;
    }

    return sum;
}

int main()
{
    std::cout<<"Enter numbers"<<std::endl;

    vector<double> double_vector;
    double double_value;
    while(std::cin>>double_value)
    {
        double_vector.push_back(double_value);
    }

    std::cout<<"result="<<vector_add(double_vector.begin(), double_vector.end())<<std::endl;

    return 0;
}

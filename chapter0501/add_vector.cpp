/*************************************************************************
    > File Name: add_vector.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Sun 14 Jun 2015 09:36:21 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

double add_vector(vector<double>::iterator begin, vector<double>::iterator end)
{
    double sum = 0.0;
    while(begin != end)
    {
        sum += *begin++;
    }

    return sum;
}

int main(void)
{
    vector<double> d_vec;
    std::cout<<"Enter double type elements for vector;(ctrl+z to end)"<<std::endl;

    double d_val;
    while(std::cin>>d_val)
    {
        d_vec.push_back(d_val);
    }

    std::cout<<"summation of elements:"<<add_vector(d_vec.begin(), d_vec.end())<<std::endl;

    return 0;
}

/*************************************************************************
    > File Name: func_overload_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Wed 10 Jun 2015 09:41:18 PM CST
 ************************************************************************/

#include<iostream>

template<class T>

T MAX(T a, T b)
{
	return a > b ? a : b;
}

template<typename T>
T MAX(T arr[], int n)
{
	T max = arr[0];
	int index;
	for(index=1; index<n; index++)
	{
		if(max < arr[index])
		{
			max = arr[index];
		}
	}

	return max;
}

int main(void)
{
	std::cout<<"MAX(3, 5)="<<MAX(3, 5)<<std::endl;

	int arr[] = {1, 2, 4, 6, 10, 9};

	std::cout<<"MAX(arr, n)="<<MAX(arr, sizeof(arr)/sizeof(arr[0]))<<std::endl;

	return 0;
}

/*********************************************
    > File  : template_func_1_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Thu 18 Jun 2015 09:52:54 AM CST
 ********************************************/

#include<iostream>

template <class T1, class T2, int number>
T1 func(int a, int b, int c , double d, T1 e, T2 f)
{
	return a + b + c + d + e + f + number;
}

int main(void)
{
	std::cout<<"func<int, int, 1>(2, 3, 4, 5.6, 7, 8)="
		<<func<int, int, 1>(2, 3, 4, 5.6, 7, 8)<<std::endl;

	return  0;
}

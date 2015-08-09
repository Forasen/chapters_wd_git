/*********************************************
    > File  : ./ostream_iterator_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Sat 20 Jun 2015 02:10:01 PM CST
 ********************************************/

#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

int main(void)
{
	int arr[5] =
	{
		1, 2, 3, 4, 5
	};
	std::vector<int> obV(arr, arr+5);
	std::ostream_iterator<int, char> osi(std::cout, "\n");
	std::copy(obV.begin(), obV.end(), osi);
	std::cout<<std::endl;

	return 0;
}

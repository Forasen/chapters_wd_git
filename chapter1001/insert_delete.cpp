/*********************************************
    > File  : insert_delete.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 08:41:31 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>

void display(std::vector<int>& x)
{
    std::vector<int>::iterator it = x.begin();
    while(it != x.end())
    {
        std::cout<<*it<<" ";
        it++;
    }
    std::cout<<std::endl;
}

int main(void)
{
    int arr[5] =
    {1, 2, 3, 4, 5};

    std::vector<int> vec(arr, arr+5);


    display(vec);
    std::vector<int>::iterator it;
    it = vec.begin();
    it = vec.insert(it, 10);
    std::cout<<"after vec.insert(vec.begin(), 10)"<<std::endl;
    display(vec);

    it = vec.end();
    vec.insert(it, 2, 2);
    std::cout<<"after vec.insert(vec.end(), 2, 2)"<<std::endl;
    display(vec);

    int brr[3] = {
        33, 33, 33
    };
    std::list<int> obL(brr, brr+3);
    std::list<int>::iterator lit = obL.begin();
    std::list<int>::iterator lit2 = obL.end();
    vec.insert(it, lit, lit2);
    display(vec);


}

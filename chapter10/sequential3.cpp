/*********************************************
    > File  : sequential3.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 04:33:47 PM CST
 ********************************************/

#include<iostream>
#include<vector>
#include<list>
#include<deque>

using std::vector;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::deque;

void display1(vector<int>& vec)
{
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void display(list<int>& li)
{
    list<int>::iterator lit;
    for(lit=li.begin(); lit!=li.end(); lit++)
    {
        cout<<*lit<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[9] = 
    {
        1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    list<int> listInt(arr, arr + 9);
    display(listInt);
    cout<<endl;

    list<int>::iterator lit = listInt.begin();
    ++lit;
    lit = listInt.erase(lit);
    display(listInt);
    cout<<"*lit="<<*lit<<endl;

    list<int>::iterator lit2 = listInt.end();
    --lit2;
    lit = listInt.erase(lit, lit2);
    lit++;
    display(listInt);

#if 0
    lit = listInt.erase(lit, listInt.end());
    display(listInt);
    cout<<"*lit="<<*lit<<endl;
#endif
    lit2 = listInt.end();
    listInt.erase(lit, lit2);
    display(listInt);

    listInt.clear();
    display(listInt);
    return 0;
}
#if 0
int test_vec()
{

    vector<int> vec(5, 0);
    vector<int>::iterator it = vec.end();
    it = vec.insert(it, 1);
    display(vec);
    cout<<"*it="<<*it<<endl;

    vec.insert(it, 2, 3);
    display(vec);
    cout<<"*it="<<*it<<endl;

    int arr[3] = {
        7, 8, 9
    };
    vec.insert(it, arr, arr+3);
    display(vec);
    cout<<"*it="<<*it<<endl;
}
#endif

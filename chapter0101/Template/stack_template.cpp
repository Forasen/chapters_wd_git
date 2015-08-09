/*************************************************************************
    > File Name: stack_template.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 08:15:33 AM CST
 ************************************************************************/

#include<iostream>

class stackA
{
    private:
        int point;
        int size;
        int* sz;
    public:
        stackA(int num = 1)
        {
            point = 0;
            size = num;
            sz = new int[size];
        }
        ~stackA()
        {
            delete []sz;
        }
        bool empty()
        {
            return point == 0;
        }
        bool full()
        {
            return point == size;
        }
        int &get_pos()
        {
            return point;
        }
        bool push(const int &boj);
        bool pop(int &obj);
};
bool stackA::push(const int &obj)
{
    if(full())
    {
        return false;
    }
    else
    {
        sz[point++] = obj;
        return true;
    }
}
bool stackA::pop(int &obj)
{
    if(empty())
    {
        return false;
    }
    else
    {
        obj = sz[--point];
        return true;
    }
}

int main(void)
{
    stackA st(10);
    //stackA<int> st(10);
    std::cout<<"is empty?:"<<st.empty()<<std::endl;
    st.push(5);
    std::cout<<"1 time is empty:"<<st.empty()<<std::endl;

    int index;
    for(index=1; index<10; index++)
    {
        st.push(index);
    }
    std::cout<<"2th time>> is full:"<<st.full()<<std::endl;

    int rec = 0;
    while(st.pop(rec))
    {
        std::cout<<rec<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

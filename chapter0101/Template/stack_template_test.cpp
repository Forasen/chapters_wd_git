/*************************************************************************
    > File Name: stack_template_test.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Thu 11 Jun 2015 08:56:31 AM CST
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
    bool is_empty()
    {
        return point == 0;
    }
    bool is_full()
    {
        return point == size;
    }
    bool push(const int &obj);
    bool pop(int &obj);
    int &get_pos()
    {
        return point;
    }
};

bool stackA::push(const int &obj)
{
    if(is_full())
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
    if(is_empty())
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

    std::cout<<"start>>is empty:"<<st.is_empty()<<std::endl;
    st.push(10);

    std::cout<<"2nd time>>is empty:"<<st.is_empty()<<std::endl;

    int index;
    for(index=1; index<10; index++)
    {
        st.push(index);
    }
    std::cout<<"3rd time>>is full:"<<st.is_full()<<std::endl;
    int ret = 0;
    while(st.pop(ret))
    {
        std::cout<<ret<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

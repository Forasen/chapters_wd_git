/*********************************************
    > File  : template_stack.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 02:58:22 PM CST
 ********************************************/

#include<iostream>
template <typename T, int num>
class Stack
{
private:
    T arr_[num];
    int point_;
public:
    Stack()
        :point_(0)
    { }
    bool isEmpty();
    bool isFull();
    bool push(const T&);
    bool pop(T&);
    int& getpos()
    {
        return point_;
    }
};

template <typename T, int num>
bool Stack<T, num>::isEmpty()
{
    return (point_ == 0);
}
template <typename T, int num>
bool Stack<T, num>::isFull()
{
    return (point_ == num);
}

template <typename T, int num>
bool Stack<T, num>::push(const T& val)
{
    if(isFull())
    {
        return false;
    }
    else
    {
        arr_[point_++] = val;
        return true;
    }
}
template <typename T, int num>
bool Stack<T, num>::pop(T& val)
{
    if(isEmpty())
    {
        return false;
    }
    else
    {
        val = arr_[--point_];
        return true;
    }
}

int main(void)
{
    Stack<int, 10> stackInt;
#if 0
    vector<string> vec;
    typedef basic_string<char, ...> string;
    string s1;
#endif
    std::cout<<"isempty : "<<stackInt.isEmpty()<<std::endl;

    for(size_t index=0; index<10; index++)
    {
        stackInt.push(index+1);
    }
    std::cout<<"2->isempty : "<<stackInt.isEmpty()<<std::endl;
    std::cout<<"2->isfull : "<<stackInt.isFull()<<std::endl;



    int rec = 0;
    while(stackInt.pop(rec))
    {
        std::cout<<rec<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

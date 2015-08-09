/*********************************************
> File  : smart_pointer.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 02:19:26 PM CST
********************************************/

#include<iostream>
nclude <iostream>  
#include <memory>  
#include <Windows.h>  
#include <queue>  
#include <Psapi.h>  
using namespace std;  

    static size_t   s_my_int_count = 0;  
    const  int      MAX_LOOP_ = 3000000;  

    const int      NORMAL_FLAG = 0x12ff0101;  
    const int      MY_INT_FLAG = 0x12ff0102;  

    void* operator new(std::size_t size)throw(std::bad_alloc)//重写new操作符为的是统计我们关心的内存分配  
    {

        int addLen = sizeof(size_t);  
        void * p = std::malloc(addLen + 4 + size) ;  

        if (!p)  
        throw std::bad_alloc() ;  

        memcpy(p, &size, addLen);//标志实际长度  
        memcpy((char*)p + addLen, &NORMAL_FLAG, 4);//标志类型，普通---0x12ff0101, 我自己的int---0x12ff0102, 我自己的char[]---0x12ff0103  
        return ((char*)p + addLen + 4);  
    }  

    void* operator new(std::size_t size, int flag)throw(std::bad_alloc)// 对应于调用 “new(MY_INT_FLAG) int” 这样所有我们关心的内存多可以被监视  
    {

        int addLen = sizeof(size_t);  
        void * p = std::malloc(addLen + 4 + size) ;  

        if (!p)  
        throw std::bad_alloc() ;  

        if (flag == MY_INT_FLAG){

            s_my_int_count ++;//统计关心的内存申请次数  
        }  

        memcpy(p, &size, addLen);//标志实际长度  
        memcpy((char*)p + addLen, &flag, 4);//放置标志位，标志类型，普通---0x12ff0101, 我自己的int---0x12ff0102, 我自己的char[]---0x12ff0103  
        return ((char*)p + addLen + 4);  
    }  

    void operator delete(void * q) throw()  
    {

        void* p;  
        int addLen = sizeof(size_t);  
        p = (char*)q - addLen - 4;//还原原来的指针位置，p是真正的系统malloc出来的指针  
        int flag;  
        memcpy(&flag, (char*)p + addLen, 4);//得到标志位  

        if (flag == MY_INT_FLAG){
            //统计关心的内存释放次数  
            //        s_my_int_count --;  
            //            }  
            //               
            //                   if (p)  
            //                           std::free(p) ;  
            //                           }  
            //                              
            //                              void main(){
            //                                
            //                                    queue<int*>  intQueue;  
            //                                        int count = 0;  
            //                                           
            //                                               count = 0;  
            //                                                  
            //                                                      cout << "before push " << s_my_int_count << " int allocated"<< endl;  
            //                                                          LONGLONG start = GetTickCount();  
            //                                                              for (int i = 0; i < MAX_LOOP_; i ++)  
            //                                                                  {
            //                                                                    
            //                                                                            int* p = new(MY_INT_FLAG) int;  
            //                                                                                    intQueue.push(p);         
            //                                                                                        }  
            //                                                                                            cout << "after push " << s_my_int_count << " int allocated"<< endl;  
            //                                                                                                while (!intQueue.empty()){
            //                                                                                                  
            //                                                                                                          int* p = intQueue.front();  
            //                                                                                                                  intQueue.pop();  
            //                                                                                                                          delete p;//注意需要手动释放  
            //                                                                                                                                  count ++;  
            //                                                                                                                                      }  
            //                                                                                                                                          cout << "after pop " << s_my_int_count << " int allocated"<< endl;  
            //                                                                                                                                              cout << "===================raw int ptr for " << count << "\t" << GetTickCount() - start << endl;  
            //                                                                                                                                                 
            //                                                                                                                                                    
            //                                                                                                                                                        unique_ptr<int> q(new int);  
            //                                                                                                                                                            unique_ptr<int> r = move(q);// 编译正确，r（q） 和 r = q则编译失败，因为unique_ptr已经不允许使用“拷贝构造函数”  
            //                                                                                                                                                               
            //                                                                                                                                                                   queue<unique_ptr<int>> intUniQueue;//因为unique_ptr没有“拷贝构造函数”  copy-constructor  
            //                                                                                                                                                                       //所以push（）的参数不能是“左值”，左值会调用“拷贝构造函数”  
            //                                                                                                                                                                           //只能是“右值”,右值则会调用“移动构造函数” move-constructor，    
            //                                                                                                                                                                               //std::move()函数可以强制将左值转化成为右值  
            //                                                                                                                                                                                  
            //                                                                                                                                                                                      count = 0;  
            //                                                                                                                                                                                          start = GetTickCount();   
        }

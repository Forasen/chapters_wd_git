/*************************************************************************
    > File Name: condition.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 04:37:37 PM CST
 ************************************************************************/

#include<iostream>
#include<pthread.h>
#include<stdio.h>
#include<unstd.h>
#include<stdlib.h>

class MutexLock
{
private:
    pthread_mutex_t mutex_;

public:
    MutexLock()
    {
        pthread_mutex_init(&mutex, NULL);
    }
    void lock();
    void unlock();
    pthread_mutex_t* getMutexLockPtr()
    {
        return &mutex_;
    }
}

class condition
{
private:
    pthread_cond_t cond_;
    pthread_mutex_t mutex_;//mutex的生命周期交给condition来管理

    MutexLock &mutex_;

public:
    condition(MutexLock &mutex)
        :mutex_(mutex)
    {

    }

#if 0
    void wait(MutexLock &mutex)//进行参数，信号的传递，接口不统一
    {
        pthread_cond_wait(&cond_, mutex.getMutexLockPtr());
        //获取mutex的目的地址，没必要用友元的方式
        
    }
#endif
    void wait(MutexLock &mutex)//进行参数，信号的传递，接口不统一
    {
        pthread_cond_wait(&cond_, mutex.getMutexLockPtr());
        //获取mutex的目的地址，没必要用友元的方式
        
    }

    void notify()
    {
        pthread_cond_signal(&cond_);
    }
    void notifyAll()
    {
        phthread_cond_broadcast(&cond_);
    }

private://不允许进行复制，将复制构造函数放到private里面
    condition(const condition &rhs);
    condition &operator=(const condition &rhg);

}

int main(void)
{
    MutexLock mutex;
    condition cond(mutex);
    mutex.lock();
    cond.wait();
    mutex.unlock();



    return 0;
}//利用多线程进行测试

/*****************************************************
    > File  : condition.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 08:02:35 PM CST
 ****************************************************/

#include<iostream>
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

class MutexLock
{
private:
    pthread_mutex_t mutex_;

public:
    MutexLock()
    {
        pthread_mutex_init(&mutex_, NULL);
    }

    void lock();
    void unlock();
    pthread_mutex_t* getMutexLockPtr()
    {
        return &mutex_;
    }
};

void MutexLock::lock()
{
    pthread_mutex_lock(&mutex_);
}
void MutexLock::unlock()
{
    pthread_mutex_unlock(&mutex_);
}
class Condition
{
private:
    pthread_cond_t cond_;
    MutexLock &mutex_;
private:
    Condition(const Condition &rhs);
    Condition &operator=(const Condition &rhs);

public:
    Condition(MutexLock &mutex)
        :mutex_(mutex)
    {

    }
#if 0
    void wait(MutexLock &mutex)
    {
        pthread_cond_wait(&cond_, mutex.getMutexLockPtr());
    }
#endif
    void wait()
    {
        pthread_cond_wait(&cond_, mutex_.getMutexLockPtr());
    }

    void notify()
    {
        pthread_cond_signal(&cond_);
    }
    void notifyAll()
    {
        pthread_cond_broadcast(&cond_);
    }
};

int main(void)
{
    MutexLock mutex;
    Condition cond(mutex);
    mutex.lock();
    cond.wait();
    mutex.unlock();


    return 0;
}

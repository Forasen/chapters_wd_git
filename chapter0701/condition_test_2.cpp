/*****************************************************
    > File  : condition_test_2.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 10:17:17 PM CST
 ****************************************************/

#include<iostream>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

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
    
    pthread_mutex_t* getMutexLock()
    {
        return &mutex_;
    }
    void mutexDestroy()
    {
        pthread_mutex_destroy(&mutex_);
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
    Condition& operator=(const Condition &rhs);

public:
    Condition(MutexLock &mutex)
        :mutex_(mutex)
    {
        pthread_cond_init(&cond_, NULL);
    }
    void wait()
    {
        pthread_cond_wait(&cond_, mutex_.getMutexLock());
    }
    void notify()
    {
        pthread_cond_signal(&cond_);
    }
    void notifyAll()
    {
        pthread_cond_broadcast(&cond_);
    }
    void destroyCondition()
    {
        pthread_cond_destroy(&cond_);
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

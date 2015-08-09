/*****************************************************
    > File  : condition_test.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 09:27:20 PM CST
 ****************************************************/

#include<iostream>

class MutexLock
{
private:
    pthread_mutex_t mutex_;
public:
    MutexLock()
    {
        pthread_mutex_init(&mutex_, NULL);
    }

    pthread_mutex_t* getMutexLockPtr()
    {
        return &mutex_;
    }
    void lock();
    void unlock();
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
    //MutexLock &cond_mutex_;
    MutexLock* cond_mutex_;

private:
    Condition(const Condition &rhs);
    Condition &operator=(const Condition &rhs);

public:
    Condition(MutexLock &mutex)
        cond_mutex_(&mutex)
    {
        pthread_cond_init(&cond_, NULL);
    }
    void wait()
    {
        pthread_cond_wait(&cond_, cond_mutex_->getMutexLockPtr());
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

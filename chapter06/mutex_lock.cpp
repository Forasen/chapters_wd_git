/*************************************************************************
    > File Name: mutex_lock.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Mon 15 Jun 2015 11:35:45 AM CST
 ************************************************************************/

#include<iostream>
#include<unistd.h>
//进行封装
//互斥锁不可轻易地复制，要禁止这样的行为！//复制构造函数的两个步骤：先构造后复制
class mutex_lock
{
private:
    mutex_lock(const mutex_lock &rhs);//实现禁止复制
    mutex_lock & operator =(const mutex_lock &rhs);
    
private:
    bool is_locking_;
    pthread_mutex_t mutex;
    
public:
    mutex_lock()
    {
        std::cout<<"mutex_lock init"<<std::endl;
        pthread_mutex_init(&mutex, NULL);
    }

    void lock()
    {
        std::cout<<"lock"<<std::endl;
        pthread_mutex_lock(&mutex);
        is_locking_ = true;
    }
    void unlock()
    {
        std::cout<<"unlock"<<std::endl;
    pthread_mutex_unlock(&mutex);
        is_locking_ = false;
    }
    ~mutex_lock()
    {
        std::cout<<"~mutex_lock"<<std::endl;
        pthread_mutex_destroy(&mutex);
    }
};

int main(void)
{
    mutex_lock mutex1;

    mutex_lock mutex2;
    //mutex2 = mutex1;//不能复制
    //while(1)
    {
        mutex1.lock();
        sleep(3);
        mutex1.unlock();
    }

    return 0;
}

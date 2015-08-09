/*********************************************
> File  : ProducerThread.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Thu 02 Jul 2015 11:42:48 AM CST
 ********************************************/

#ifndef __WD_PRODUCERTHREAD_H__
#define __WD_PRODUCERTHREAD_H__
#include "Thread.h"

namespace wd
{
	class Buffer;

    class ProducerThread: public Thread
    {
    public:
        void run();
    private:
        void processTask();
		Buffer& buffer_;
    }
}

#endif

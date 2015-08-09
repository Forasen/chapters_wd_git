/*********************************************
    > File  : test_log.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 11:20:27 AM CST
 ********************************************/
#define LOG4CPP
#include "Mylog.h"
#include <cstring>
#if 0
const char* postfix(const char* msg)
{
    std::string(msg).append("[").append(__FILE__)
    .append(":").append().append(__func__).append((":")wd::int2String(__LINE___)).append("]").c_str();
}
#endif
int main(void)
{
    wd::Mylog& log = wd::Mylog::createINstance();
    log.error(wd::profix("Hello world1"))；
    log.error(wd::profix("Hello world1"))；
    log.error(wd::profix("Hello world1"))；
    log.error(wd::profix("Hello world1"))；


	LogError("hello");
	LogWarn("hello");
	LogInfo("hello");
	LogDebug("hello");
#if 0
	__FILE__
	__LINE__
	__func__//宏只做字符串的替换！
	//进行字符串的添加
	LogError(msg);
	std::string s1;
	s1.append();//添加字符串！
#endif
    return 0;
}

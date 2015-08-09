/*********************************************
    > File  : mylog.h
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 10:55:55 AM CST
 ********************************************/

#ifndef __MYLOG_H__
#define __MYLOG_H__
#include<iostream>
#include<log4cpp/PatternLayout.hh>
#include<log4cpp/FileAppender.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/Priority.hh>

#define Postfix(fmt) std::string(fmt).append("")
enum Priority
{
    ERROR = 0,
    WARN,
    INFO,
    DEBUF
};


class 
{
private:
    static Mylog* pmylog_;
    log4cpp::Category& refCat_;
    log4cpp::FileAppender* pFileAppd_;

public:
    static Mylog* createInstance();
    static  void destroy();
    void error(const char* msg);
    void warn(const char* msg);
    void info(const char* msg);
    void debug(const char* msg);
    private:

    std::string(msg).append("[").append(__FILE__)/
    .append(":").append().append(__func__).append((":")wd::int2String(__LINE___)).append("]").c_str();
};
#endif

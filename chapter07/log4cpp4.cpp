/*************************************************************************
    > File Name: log4cpp4.cpp
    > Author: NewYork
    > Mail: 2287794993@qq.com 
    > Created Time: Tue 16 Jun 2015 04:27:25 PM CST
 ************************************************************************/

#include<iostream>
#include<log4cpp/Priority.hh>
#include<log4cpp/PatternLayout.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/FileAppender.hh>

int main(void)
{
    log4cpp::FileAppender* pFileAppd = 
        new log4cpp::FileAppender("FileAppender", "first.log");
    
}

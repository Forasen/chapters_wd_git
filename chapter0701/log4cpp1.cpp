/*****************************************************
    > File  : log4cpp1.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Tue 16 Jun 2015 11:09:53 PM CST
 ****************************************************/

#include<iostream>
#include<log4cpp/Category.hh>
#include<log4cpp/Priority.hh>
#include<log4cpp/OstreamAppender.hh>
#include<log4cpp/BasicLayout.hh>

int main(void)
{
    log4cpp::OstreamAppender* 
    pOstreamAppender = new log4cpp::OstreamAppender("cout", &std::cout);
    pOstreamAppender->setLayout(new log4cpp::BasicLayout());

    log4cpp::Category &root = log4cpp::Category::getRoot();
    root.addAppender(pOstreamAppender);

    root.setPriority(log4cpp::Priority::ERROR);

    root.error("Hello log4cpp in error Message!");
    root.warn("Hello log4cpp in warn Message!");
    root.debug("Hello log4cpp in debug Message!");
    root.info("Hello log4cpp in info Message!");

    log4cpp::Category::shutdown();

    return 0;
}

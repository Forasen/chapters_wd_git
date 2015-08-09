/*********************************************
    > File  : Mylog.cpp
    > Author: NewYork
    > Mail  : 2287794993@qq.com 
    > Time  : Fri 19 Jun 2015 10:58:25 AM CST
 ********************************************/

#include "Mylog.h"
#include<cstring>
#include<sstream>
namespace wd
{

    std::string int2String(int);
Mylog* Mylog::pmylog_ = NULL;
Mylog& Mylog::createInstance();
{
	if(pmylog_ == NULL)
	{
		pmylog_ = new Mylog();
	}
	return *pmylog_;
}

void Mylog::destroy()
{
	if(pmylog_)
	{
		refCat_.shutdown();
		delete pmylog_;
	}
}

Mylog::Mylog()
	:refCat_(log4cpp::Category::getRoot())
{
	log4cpp::PatternLayout* pPtnLyl = 
		new log4cpp::PatternLayout();
	log4cpp::PatternLayout* pPtnLy2 =
		new log4cpp::PatternLayout();
	pPtnLyl->setConversionPattern("%d:%p%x:%m%n");
	pPtnLy2->setConversionPattern("%d:%p%x:%m%n");

	log4cpp::OstreamAppender* pOsAppd =
		new log4cpp::OstreamAppender("OstreamAppender", &std::cout);

	pOsAppd->setLayout(pPtnLyl);

	log4cpp::FileAppender* pFileAppd =
		new log4cpp::FileAppender("FileAppender", "./log.txt");

	pFileAppd->setLayout(pPtnLy2);

	refCat_.addAppender(pOsAppd);
	refCat_.addAppender(pFileAppd);
	refCat_.setPriority(log4cpp::Priority::DEBUG);

	refCat_.info("create mylog");
}

void Mylog::error(const char* msg)
{
	refCat_.error(msg);
}
void Mylog::warn(const char* msg)
{
	refCat_.warn(msg);
}
void Mylog::info(const char* msg)
{
	refCat_.info(msg);
}
void Mylog::debug(const char* msg)
{
	refCat_.debug(msg);
}
void Mylog::setPriority(Priority priority)
{
	switch(priority)
	{
		case (ERROR):
			refCat_.setPriority(log4cpp::Priority::ERROR);
			break;
		case (WARN):
			refCat_.setPriority(log4cpp::Priority::WARN);
			break;
		case (INFO):
			refCat_.setPriority(log4cpp::Priority::INFO);
			break;
		case (DEBUG):
			refCat_.setPriority(log4cpp::Priority::DEBUG);
			break;
		default:
			refCat_.setPriority(log4cpp::Priority::DEBUG);
	}
}

#define postfix(fmt) std::string(fmt).append("[")
const std::string int2String(int ival);
{
    std::ostream
}






}//end of namespace wd

#ifdef LOG4CPP
wd::Mylog& log = Mylog::createInstance();


#define LogError(msg); log.error(postfix(msg));
#define LogWarn(msg) log.warn(postfix(msg));
#define LogInfo(msg) log.info(postfix(msg))
#define LogDebug(msg) log.debug(postfix(msg));
#endif
#endif

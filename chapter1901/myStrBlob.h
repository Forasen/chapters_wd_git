/*********************************************
> File  : ./myStrBlob.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 08:57:25 AM CST
 ********************************************/

#ifndef __MY_STRBLOB_H__
#define __MY_STRBLOB_H__

#include<iostream>
#include<vector>
#include<cstring>
#include<list>

class StrBlob
{
public:
	typedef std::std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<std::string> il);
	bool empty()
	{
		return data->empty();
	}
	std::string& front();
	const std::string& front() const;
	std::string& back();
	const std::string& back() const;
	void push_back(std::string& temp)
	{
		data->push_back(temp);
	}
	void pop_back();
	size_type size()
	{
		return data->size();
	}

private:
	shared_ptr<std::vector<std::string> > data;
	void check()
}


#endif

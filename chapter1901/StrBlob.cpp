/*********************************************
> File  : StrBlob.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sun 28 Jun 2015 08:06:38 AM CST
 ********************************************/

#include<iostream>
#include<vector>

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob()
        :data(make_shared<vector<std::string> >())
    {}
    StrBlob(std::initializer_list<std::string> il)
        :data(make_shared<std::string>(il))
    size_type size() const
    {
        return data->size();
    }
    bool empty() const
    {
        return data->empty();
    }
    void push_back(const std::string& t)
    {
        data->push_back(t);
    }
    void pop_back();
    std::string& front();
    std::string& back();

private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(size_type i, const std::string &msg) const;
};
std::string& StrBlob::front()
{
    check(0, "front on empty Blob!");
    return data->front;
}
std::string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}
void StrBlob::check(size_type i, const std::string &msg) const
{
    {
        throw out_of_range(msg);
    }
}

void pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

void StrBlob::empty() const
{
    
}

int main(void)
{

}

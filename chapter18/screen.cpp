/*********************************************
> File  : screen.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Sat 27 Jun 2015 03:01:26 PM CST
 ********************************************/

#include<iostream>

class Screen
{
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pow h, pos w)
        :height_(h), width_(w), contents_(h*w, '')
    {}
    Screen(pow h, pos w, char c)
        :height_(h), width_(w), contents_(h*w, c)
    {}
    char get() const
    {
        return contents_[cursor_];
    }
    inline char get(pos h, pos w) const;
    Screen& move(pos h, pos w);

private:
    pos cursor_ = 0;
    pos height_ = 0;
    pos width_ = 0;
    std::string contents_;
};


inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width_;
    cursor_ = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width_;
    return contents_[row + c];
}

class Window_mgr
{
private:
    std::vector<Screen> screens{
        Screen(24, 80, '')
    };
};

/*********************************************
> File  : node.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 08:43:23 PM CST
 ********************************************/

#include "node.h"
#include<iostream>
#include<cmath>

double NumberNode::Calc() const
{
    return number_;
}
BinaryNode::~BinaryNode()
{
    delete left_;
    delete right_;
}
UnaryNode::~UnaryNode()
{

}

double AddNode::Calc() const
{
    return left_->
}

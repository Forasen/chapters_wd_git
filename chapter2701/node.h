/*********************************************
> File  : node.h
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 08:26:32 PM CST
 ********************************************/

#ifndef __NODE_H__
#define __NODE_H__
#include<iostream>

class NonCopyable
{
private:
    NonCopyable(const NonCopyable&);
    NonCopyable& operator=(const NonCopyable&);
protected:
    NonCopyable()
    {}
    ~NonCopyable()
    {}
};
class Node:private NonCopyable
{
public:
    virtual double Calc() const = 0;
    virtual ~Node() 
    {}
};

class NumberNode: public Node
{
public:
    BinaryNode(Node* left, Node* right)
        :left_(left), right_(right)
    {}
    ~BinaryNode();

protected:
    Node* const left_;
    Node* const right_;
};

class UnaryNode: public Node
{
protected:
    Node* const child_;
public:
    UnaryNode(Node* child)
        :child_(child)
    {}
};
class AddNode: public BinaryNode
{
public:
    AddNode(Node* left, Node* right)
        :BinaryNode(left, right)
    {}
    double Calc() const;
};
class SubNode: public BinaryNode
{
public:
    SubNode(Node* left, Node* right)
        :BinaryNode(left, right)
    {}
    double Calc() const;
};
class  MultiplyNode: public BinaryNode
{
public:
    MultiplyNode(Node* left, Node* right)
        :BinaryNode(left, right)
    {}
    double Calc() const;
};
class DivideNode
{
public:
    DivideNode(Node* left, Node* right)
        :BinaryNode(left, right)
    {}
    double Calc() const;
};

class UMinusNode
{
public:
    UMinusNode(Node* left, Node* right)
        :BinaryNode(left, right)
    {}
};

#endif


/*********************************************
> File  : figure.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Wed 24 Jun 2015 11:46:21 PM CST
 ********************************************/

#include<iostream>

class Figure
{
protected:
    double xSize_;
    double ySize_;
public:
    Figure(double, double);
};

class Figure_2D: public Figure
{
protected:

public:
    Figure_2D(double, double);
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Figure_3D: public Figure
{
protected:
    double zSize_;
public:
    Figure_3D(double, double, double);
    virtual double cubage() = 0;
};

class Rectangle: public Figure_2D
{
public:
    Rectangle(double, double);
    virtual double area();
    virtual double perimeter();
};

class Circle: public Figure_2D
{
public:
    Circle(double, double d = 0);
    virtual double area();
    virtual double perimeter();
};

class Sphere: public Figure_3D
{
public:
    Sphere(double, double, double);
    virtual double cubage();
};

class Cone: public Figure_3D
{
public:
    Cone(double, double, double);
    virtual double cubage();
};

int main(void)
{
    return 0;
}

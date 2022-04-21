#pragma once

#include <iostream>

class Shape
{
protected:
    float area;
    float perimeter;
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    friend bool operator<(const Shape &shape_one, const Shape &shape_two);
    friend bool operator>(const Shape &shape_one, const Shape &shape_two);
    friend bool operator==(const Shape &shape_one, const Shape &shape_two);
};

class Circle : public Shape
{
protected:
float radius;
public:
    Circle(float radius);
    void setArea();
    void setPerimeter();
    double getArea();
    double getPerimeter();
};

class Triangle : public Shape
{
protected:
    float length_one;
    float length_two;
    float length_three;
public:
    Triangle(float length_one, float length_two, float length_three);
    void setArea();
    void setPerimeter();
    double getArea();
    double getPerimeter();
};

class Rectangle : public Shape
{
protected:
    float length_one;
    float length_two;
public:
    Rectangle(float length_one, float length_two);
    void setArea();
    void setPerimeter();
    double getArea();
    double getPerimeter();
};

class Square : public Shape
{
protected:
  float length;  
public:
    Square(float length);
    void setArea();
    void setPerimeter();
    double getArea();
    double getPerimeter();
};

template <class T1, class T2>
bool isEqual(T1 const &a, T2 const &b);

template <class T1, class T2>
bool isGreaterThan(T1 const &a, T2 const &b);

template <class T1, class T2>
bool isLessThan(T1 const &a, T2 const &b);
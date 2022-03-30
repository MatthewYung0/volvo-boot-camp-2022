#include <iostream>
#include <math.h>

class Shape
{
protected:
    float area;
    float perimeter;

public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape
{
protected:
    float radius;

public:
    double getArea()
    {
        return M_PI * radius * radius;
    }
    double getPerimeter()
    {
        return 2 * M_PI * radius;
    }
};

class Triangle : public Shape
{
protected:
    float length_one;
    float length_two;
    float length_three;

public:
    double getArea()
    {
        return 0.5 * length_one * length_two;
    }
    double getPerimeter()
    {
        return length_one * length_two * length_three;
    }
};

class Rectangle : public Shape
{
protected:
    float length_one;
    float length_two;

public:
    double getArea()
    {
        return length_one * length_two;
    }
    double getPerimeter()
    {
        return (2 * length_one) + (2 * length_two);
    }
};

class Square : public Shape
{
protected:
    float length;

public:
    double getArea(double radius)
    {
        return length * length;
    }
    double getPerimeter()
    {
        return 4 * length;
    }
};

int main()
{
}
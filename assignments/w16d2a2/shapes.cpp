#include "shapes.h"

bool operator<(const Shape &shape_one, const Shape &shape_two)
{
    return shape_one.area < shape_two.area;
}
bool operator>(const Shape &shape_one, const Shape &shape_two)
{
    return shape_one.area > shape_two.area;
}
bool operator==(const Shape &shape_one, const Shape &shape_two)
{
    return (shape_one.area == shape_two.area) && (shape_one.perimeter == shape_two.perimeter);
}

Circle::Circle(float radius)
{
    this->radius = radius;
}
void Circle::setArea()
{
    area = 3 * radius * radius;
}
void Circle::setPerimeter()
{
    perimeter = 2 * 3 * radius;
}
double Circle::getArea()
{
    return this->area;
}
double Circle::getPerimeter()
{
    return this->perimeter;
}

Triangle::Triangle(float length_one, float length_two, float length_three)
{
    this->length_one = length_one;
    this->length_two = length_two;
    this->length_three = length_three;
}
void Triangle::setArea()
{
    area = 0.5 * length_one * length_two;
}
void Triangle::setPerimeter()
{
    perimeter = length_one * length_two * length_three;
}
double Triangle::getArea()
{
    return area;
}
double Triangle::getPerimeter()
{
    return perimeter;
}

Rectangle::Rectangle(float length_one, float length_two)
{
    this->length_one = length_one;
    this->length_two = length_two;
}
void Rectangle::setArea()
{
    area = length_one * length_two;
}
void Rectangle::setPerimeter()
{
    perimeter = (2 * length_one) + (2 * length_two);
}
double Rectangle::getArea()
{
    return area;
}
double Rectangle::getPerimeter()
{
    return perimeter;
}

Square::Square(float length)
{
    this->length = length;
}
void Square::setArea()
{
    area = length * length;
}
void Square::setPerimeter()
{
    perimeter = 4 * length;
}
double Square::getArea()
{
    return area;
}
double Square::getPerimeter()
{
    return perimeter;
}

template <class T1, class T2>
bool isEqual(T1 const &a, T2 const &b)
{
    return a == b;
};

template <class T1, class T2>
bool isGreaterThan(T1 const &a, T2 const &b)
{
    return a > b;
}

template <class T1, class T2>
bool isLessThan(T1 const &a, T2 const &b)
{
    return a < b;
}
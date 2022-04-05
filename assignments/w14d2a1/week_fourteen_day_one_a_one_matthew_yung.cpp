#include <iostream>

class Shape
{
protected:
    float area;
    float perimeter;
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    // If shape_one < shape_two, return true;
    friend bool operator<(const Shape &shape_one, const Shape &shape_two)
    {       
        return shape_one.area < shape_two.area;
    }
    // If shape_one > shape_two, return true;
    friend bool operator>(const Shape &shape_one, const Shape &shape_two)
    {
        return shape_one.area > shape_two.area;
    }
    // If shape_one == shape_two, return true;
    friend bool operator==(const Shape &shape_one, const Shape &shape_two)
    {
        return (shape_one.area == shape_two.area) && (shape_one.perimeter == shape_two.perimeter);
    }
};

class Circle : public Shape
{
protected:
float radius;
public:
    Circle(float radius)
    {
        this->radius = radius;
    }
    void setArea()
    {
        area = 3 * radius * radius;
    }
    void setPerimeter()
    {
        perimeter = 2 * 3 * radius;
    }
    double getArea()
    {
        return this->area;
    }
    double getPerimeter()
    {
        return this->perimeter;
    }
};

class Triangle : public Shape
{
protected:
    float length_one;
    float length_two;
    float length_three;
public:
    Triangle(float length_one, float length_two, float length_three)
    {
        this->length_one = length_one;
        this->length_two = length_two;
        this->length_three = length_three;
    }
    void setArea()
    {
        area = 0.5 * length_one * length_two;
    }
    void setPerimeter()
    {
        perimeter = length_one * length_two * length_three;
    }
    double getArea()
    {
        return area;
    }
    double getPerimeter()
    {
        return perimeter;
    }
};

class Rectangle : public Shape
{
protected:
    float length_one;
    float length_two;
public:
    Rectangle(float length_one, float length_two)
    {
        this->length_one = length_one;
        this->length_two = length_two;
    }
    void setArea()
    {
        area = length_one * length_two;
    }
    void setPerimeter()
    {
        perimeter = (2 * length_one) + (2 * length_two);
    }
    double getArea()
    {
        return area;
    }
    double getPerimeter()
    {
        return perimeter;
    }
};

class Square : public Shape
{
protected:
  float length;  
public:
    Square(float length)
    {
        this->length = length;
    }
    void setArea()
    {
        area = length * length;
    }
    void setPerimeter()
    {
        perimeter = 4 * length;
    }
    double getArea()
    {
        return area;
    }
    double getPerimeter()
    {
        return perimeter;
    }
};

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

int main() {

    Circle circle_one(0);
    Circle circle_two(0);
    Square square_one(1);
    Triangle triangle_one(1,1,1);

    circle_one.setArea();
    circle_one.setPerimeter();
    circle_two.setArea();
    circle_two.setPerimeter();
    square_one.setArea();
    square_one.setPerimeter();
    triangle_one.setArea();
    triangle_one.setPerimeter();

    std::cout << "circle_one is equal to circle_two: " << isEqual(circle_one, circle_two) << std::endl;
    std::cout << "circle_one is equal to square_one: " << isEqual(circle_one, square_one) << std::endl;
    std::cout << "square_one is less than triangle_one: " << isLessThan(square_one, triangle_one) << std::endl;
    std::cout << "triangle_one is greater than square_one: " << isLessThan(triangle_one, square_one) << std::endl;


}
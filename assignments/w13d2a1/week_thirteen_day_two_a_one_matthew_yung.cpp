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

int main()
{ 
    Circle circle_one = Circle(1);
    circle_one.setArea();
    circle_one.setPerimeter();

    Circle circle_two = Circle(1);
    circle_two.setArea();
    circle_two.setPerimeter();

    Triangle triangle = Triangle(1, 1, 1);
    triangle.setArea();
    triangle.setPerimeter();

    Rectangle rectangle = Rectangle(5, 5);
    rectangle.setArea();
    rectangle.setPerimeter();

    Square square = Square(1000);
    square.setArea();
    square.setPerimeter();

    bool area_circle_versus_square = circle_one < square;
    std::cout << area_circle_versus_square << std::endl;

    bool area_triangle_versus_rectangle = triangle > rectangle;
    std::cout << area_triangle_versus_rectangle << std::endl;

    bool circle_one_versus_circle_two = circle_one == circle_two;
    std::cout << circle_one_versus_circle_two << std::endl;

}
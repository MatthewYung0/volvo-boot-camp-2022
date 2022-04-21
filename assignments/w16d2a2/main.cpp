#include <iostream>
#include "shapes.h"

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

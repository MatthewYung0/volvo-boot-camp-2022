#include <iostream>

/* void findAnElement(int *p, size_t s, size_t e) {
    bool b = false;
    for (size_t i = 0; i < s; i++) {
        if (*(p+i) == e) {
            std::cout << "FOUND" << std::endl;
            b = true;
            break;
        }
        if (b); else std::cout << "NOT FOUND" << std::endl;
    }
}

void test0(){
    int a[45] = {0};
    findAnElement(a,45,0);
}
void test1(){
    int a[45] = {0};
    findAnElement(a,45,1);
}
void test2(){
    int *a;
    findAnElement(a,45,0);
}
void test3(){
    int *a = new int[3];
    findAnElement(a,-2,11);
}

int main()
{ 
    test0();
    test1();
    test2();
    test3();
} */

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

void greaterThan(std::string title, Circle circle_one, Circle circle_two)
{
    std::cout << "TEST: " << title << std::endl;
    if (circle_one > circle_two)
    {
        std::cout << "TRUE\n\n";
    }
    else
    {
        std::cout << "FALSE\n\n";
    }
}

void lessThan(std::string title, Circle circle_one, Circle circle_two)
{
    std::cout << "TEST: " << title << std::endl;
    if (circle_one < circle_two) {
        std::cout << "TRUE\n\n";
    }
    else {
        std::cout << "FALSE\n\n";
    }
}

void equalTo(std::string title, Circle circle_one, Circle circle_two)
{
    std::cout << "TEST: " << title << std::endl;
    if (circle_one == circle_two)
    {
        std::cout << "TRUE\n\n";
    }
    else
    {
        std::cout << "FALSE\n\n";
    }
}

int main() {
    Circle circle_one(0);
    circle_one.setArea();
    Circle circle_two(0);
    circle_two.setArea();

    greaterThan("(AREA)             CIRCLE_ONE > CIRCLE_TWO", circle_one, circle_two);
    lessThan("(AREA)             CIRCLE_ONE < CIRCLE_TWO", circle_one, circle_two);
    equalTo("(AREA & PERIMETER) CIRCLE_ONE == CIRCLE_TWO", circle_one, circle_two);
}

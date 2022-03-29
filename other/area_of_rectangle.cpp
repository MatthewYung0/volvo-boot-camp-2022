#include <iostream>

class Rectangle
{
    public:
    int width;
    int height;

    void display() {
        std::cout << width << " " << height << std::endl;
    }
};

class RectangleArea : public Rectangle 
{
    public:
    void read_input() {
        scanf("%d %d", &width, &height);
    }
    void display() {
        std::cout << width * height << std::endl;
    }
};

int main()
{

    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();

}
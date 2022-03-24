#include <iostream>
#include <cmath>


int main() {

    int radius;
    
    std::cout << "Enter the radius: ";
    std::cin >> radius;

    std::cout << "Area: " << pow(radius, 2) * M_PI << std::endl;
    std::cout << "Circumference: " << 2 * M_PI * radius;

}
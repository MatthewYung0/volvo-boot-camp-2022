#include <iostream>

int main() {
    std::cout << "Enter the degrees to convert: ";
    float degrees_celsius;
    std::cin >> degrees_celsius;

    std::cout << (degrees_celsius * 9 / 5) + 32;
    
}
#include <iostream>

int main() {

    int number = 1;
    int base;
    int power;
    
    std::cout << "Enter a number: ";
    scanf("%d", &base);
    std::cout << "Enter the power: ";
    scanf("%d", &power);

    while (power > 0) {
        number *= base;
        power--;
    }

    std::cout << number;

}
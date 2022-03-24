#include <iostream>
#include <math.h>

int main() {
    int number;

    std::cout << "Enter a number: ";
    scanf("%d", &number);

    int sqrt_number = sqrt(number);

    if (number <= 0) {
        std::cout << "Number must be positive!";
    } else if (sqrt_number * sqrt_number == number) {
        std::cout << number << " is a perfect sqaure!";
    } else {
        std::cout << number << " is NOT a perfect sqaure!";
    }
    
}
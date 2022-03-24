#include <iostream>

int main() {

    int number_one;
    int number_two;
    
    std::cout << "Enter two numbers: ";
    scanf("%d %d", &number_one, &number_two);

    if (number_one < number_two) {
        std::cout << number_one << " is less than " << number_two;
    } else if (number_one > number_two) {
        std::cout << number_one << " is bigger than " << number_two;
    } else {
        std::cout << number_one << " is the same as " << number_two;
    }
}
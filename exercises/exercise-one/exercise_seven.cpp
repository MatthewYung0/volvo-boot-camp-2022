#include <iostream>

int main() {

    int number_one;
    int number_two;
    int number_three;

    std::cout << "Enter three numbers: ";
    scanf("%d %d %d", &number_one, &number_two, &number_three);

    if (number_one < number_two && number_one < number_three) {
        std::cout << number_one << " is the smallest number";
    } else if (number_two < number_one && number_two < number_three) {
        std::cout << number_two << " is the smallest number";
    } else if (number_three < number_one && number_three < number_one) {
        std::cout << number_three << " is the smallest number";
    } else {
        std::cout << "All numbers are equal to each other!";
    }

}
#include <iostream>

int main(void)
{

    int num1;
    int num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << ((num1 + num2) * 3) - 10;

}
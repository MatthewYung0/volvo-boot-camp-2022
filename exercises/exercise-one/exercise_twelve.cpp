#include <iostream>

int main()
{
    int number = 0;
    int factorial = 1;

    std::cout << "Enter a positive number: ";
    scanf("%d", &number);

    if (number < 0)
    {
        std::cout << "Number must be positive!";
    }
    else
    {
        for (int i = number; i >= 1; i--)
        {
            factorial *= i;
        }
        std::cout << factorial;
    }
}

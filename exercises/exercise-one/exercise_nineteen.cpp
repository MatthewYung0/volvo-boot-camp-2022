#include <iostream>

int main()
{

    char star = '*';
    int number = 0;
    std::cout << "Enter how many rows of stars to print: ";
    scanf("%d", &number);

    for (int i = number; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << star << " ";
        }
        std::cout << std::endl;
    }
}
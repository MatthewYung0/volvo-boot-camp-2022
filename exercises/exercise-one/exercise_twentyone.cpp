#include <iostream>

int main()
{

    int row = 0;

    std::cout << "Enter how many rows of stars to print: ";
    scanf("%d", &row);

    int start = 0;
    int end = row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j == start)
            {
                std::cout << "*";  
            }
            if (j == end - 1)
            {
                std::cout << "*";
            }
            std::cout << " ";
        }
        std::cout << std::endl;
        end--;
        start++;
    }
}
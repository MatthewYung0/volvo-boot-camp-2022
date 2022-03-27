#include <iostream>
#include <string>

void bubble_sort(int array[], int array_size);
void print_array(int array[], int array_size);

int main() {
    int bubble_sort_array[8] = {1, 6, 5, 41, 10, 24, 4, 67};
    int bubble_sort_array_size = sizeof(bubble_sort_array) / sizeof(bubble_sort_array[0]);
    std::cout << "Before Bubble Sort" << std::endl;
    print_array(bubble_sort_array, bubble_sort_array_size);
    std::cout << "After Bubble Sort" << std::endl;
    bubble_sort(bubble_sort_array, bubble_sort_array_size);
}

void bubble_sort(int array[], int array_size)
{
    // Bubble sorting algorithm
    for (int i = 0; i < array_size; i++)
    {
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[i] > array[j])
            {
                std::swap(array[i], array[j]);
            }
        }
    }
    // Printing the sorted algorithm
    print_array(array, array_size);
}

void print_array(int array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl
              << std::endl;
}
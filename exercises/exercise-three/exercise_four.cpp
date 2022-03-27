#include <iostream>

void selection_sort(int array[], int array_size);
void print_array(int array[], int array_size);

int main() {

    int selection_sort_array[10] = {2, 8, 90, 87, 10, 24, 4, 67, 2, 2};
    int selection_sort_array_size = sizeof(selection_sort_array) / sizeof(selection_sort_array[0]);
    std::cout << "Before Selection Sort" << std::endl;
    print_array(selection_sort_array, selection_sort_array_size);
    std::cout << "After Selection Sort" << std::endl;
    selection_sort(selection_sort_array, selection_sort_array_size);

}

void selection_sort(int array[], int array_size)
{
    // Variable for holding index with lowest value
    int minimum_index = 0;
    // Selection sorting algorithm
    for (int i = 0; i < array_size; i++)
    {
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[j] <= array[i])
            {
                minimum_index = j;
            }
            if (j == array_size - 1)
            {
                std::swap(array[i], array[minimum_index]);
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
#include <iostream>

void bubble_sort(int array[], int array_size);
void selection_sort(int array[], int array_size);
void print_array(int array[], int array_size);
int* two_value(unsigned char lower, unsigned char upper);
unsigned char size = 0;

int main()
{
    // Bubble Sort
    int bubble_sort_array[8] = {1, 6, 5, 41, 10, 24, 4, 67};
    int bubble_sort_array_size = sizeof(bubble_sort_array) / sizeof(bubble_sort_array[0]);
    std::cout << "Before Bubble Sort" << std::endl;
    print_array(bubble_sort_array, bubble_sort_array_size);
    std::cout << "After Bubble Sort" << std::endl;
    bubble_sort(bubble_sort_array, bubble_sort_array_size);

    // Selection Sort
    int selection_sort_array[10] = {2, 8, 90, 87, 10, 24, 4, 67, 2, 2};
    int selection_sort_array_size = sizeof(selection_sort_array) / sizeof(selection_sort_array[0]);
    std::cout << "Before Selection Sort" << std::endl;
    print_array(selection_sort_array, selection_sort_array_size);
    std::cout << "After Selection Sort" << std::endl;
    bubble_sort(selection_sort_array, selection_sort_array_size);

    // Return values
    unsigned char lower_value = 5;
    unsigned char upper_value = 10;
    int *ptr = two_value(upper_value, lower_value);
    print_array(ptr, size);
    delete[] ptr;
}

int *two_value(unsigned char upper, unsigned char lower)
{
    if (lower >= upper)
    {
        int* array_flag = new int [2];
        array_flag[0] = {0xff};
        array_flag[1] = {0xff};
        size = 2;
        return array_flag;
    }
    else
    {
        int* array = new int[upper - lower];
        unsigned char index = 0;
        unsigned char starting_digit = upper - 1;
        while (index < upper - lower)
        {
            array[index] = starting_digit;
            index++;
            starting_digit--;
        }
        size = upper - lower - 1;
        return array;
    }
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

//hfhdsfd

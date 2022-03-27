#include <iostream>
#include <string.h>

int *reverseArray(int array[], int size);

int main()
{
    int array[] = {1,2,3,4,5};
    int size = sizeof (array) / sizeof (array[0]);

    int *new_array = reverseArray(array, size);

    for (int i = 0; i < size; i++) {
        std::cout << new_array[i] << " ";
    }
}

int *reverseArray(int array[], int size) {

    int *new_array = new int[size];
    int j = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        new_array[j] = array[i];
        j++;
    }
    return new_array;
}
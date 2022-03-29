#include <iostream>

int* removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);
void printArray(int arr_new[], int new_array_size);

int main() {

    //Old array and size
    int arr_old[] = {1,2,3,3,3,4,4,5,5,5,6,7};
    int n_old = sizeof(arr_old)/sizeof(arr_old[0]);

    //Index for looping through old array
    int index = 0;

    //Getting first digit from array
    int digit = arr_old[0];

    //Variable for new array size
    int n_new = 0;

    //Loop to check for duplicates. If the next digit in arr_old is new, n_new increments.
    while (index <= n_old) {
        if (arr_old[index] != digit) {
            digit = arr_old[index];
            n_new++;
        }
        index++;
    }
    
    //Creating arr_new with size from n_new
    int arr_new[n_new];
    int new_array_size = sizeof(arr_new)/sizeof(arr_new[0]);
    
    //Passing arr_old, n_old, arr_new, and n_new as arguments for populating arr_new without duplicates.
    int* new_array = removeDuplicates(arr_old, n_old, arr_new, &n_new);

    //Printing out new array
    printArray(arr_new, new_array_size);

}

int *removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
    //Error catching if arr_old is empty
    if (n_old == 0) {
        return NULL;
    }

    int arr_old_index = 0;
    int arr_new_index = 1;
    int digit = arr_old[0];
    arr_new[0] = arr_old[0];

    //Checking and adding non-duplicate integers into new array.
    while (arr_old_index < n_old) {
        if (arr_new[arr_new_index - 1] != arr_old[arr_old_index]) {
            arr_new[arr_new_index] = arr_old[arr_old_index];
            arr_new_index++;
        }
        arr_old_index++;
    }
    return arr_new;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
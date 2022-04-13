#include <iostream>

int arr_size = 0;
int read_ptr_counter = 0;
int write_ptr_counter = 0;
bool hasBegun = false;

void printArray(int array[]) {
	for (int i = 0; i < arr_size; i++) {
		std::cout << array[i] << " ";
	}
}

void readArray(int*& read_ptr, int*& write_ptr, int* array[]) {
	// If the array has been first written, then return and print out is empty.
	if (hasBegun != true) {
		std::cout << "Array is empty!";
		return;
	}
	// If the read_ptr_counter is greater than the size, repoint back to the first element.
	else if (read_ptr_counter >= arr_size) {
		read_ptr = array[0];
		read_ptr_counter = 0;
	}
	std::cout << *read_ptr << std::endl << std::endl;
	read_ptr_counter++;
	read_ptr++;
}

void writeArray(int number, int*& write_ptr, int*& read_ptr, int* array[]) {
	// If the read_ptr_counter is at the same position as the write_ptr_counter, read_ptr++.
	// read_ptr must always be at, or before the write_ptr.
	if (hasBegun == true && read_ptr_counter == write_ptr_counter) {
		read_ptr_counter++;
		if (read_ptr_counter >= arr_size) {
			read_ptr = array[0];
			read_ptr_counter = 0;
		}
	}
	// If the write_ptr_counter is greater than the size, repoint back to the first element.
	if (write_ptr_counter >= arr_size) {
		write_ptr = array[0];
		write_ptr_counter = 0;
	}
	*write_ptr = number;
	write_ptr_counter++;
	write_ptr++;
	//flag to indicate ring buffer has begun.
	hasBegun = true;
}

void printMenu() {
	std::cout << "\nChoose one of the following: \n";
	std::cout << "1. Insert number\n";
	std::cout << "2. Read number\n";
	std::cout << "3. Print array\n";
	std::cout << "0. Exit\n\n";
}

int main() {

	int user_selection = -1;

	std::cout << "Enter the array size: ";
	std::cin >> arr_size;

	int* array = new int[arr_size];

	int* read_ptr = array;
	int* write_ptr = array;

	while (user_selection != 0) {
		printMenu();
		int number = 0;
		std::cin >> user_selection;
		switch (user_selection) {
		case 1: {
			std::cout << "\nEnter a number to add: ";
			std::cin.ignore();
			std::cin >> number;
			writeArray(number, write_ptr, read_ptr, &array);
			break;
		}case 2: {
			readArray(read_ptr, write_ptr, &array);
			break;
		}
		case 3: {
			printArray(array);
			break;
		}
		}
	}
}
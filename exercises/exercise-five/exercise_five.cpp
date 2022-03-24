#include <iostream>

struct student {
    char name[30];
    int id;
    float grade;
} array[2], *student_ptr;

void PrintStudentDetails(struct student *ptr, int size);
void AddStudentDetails(struct student *ptr, int size);

int main() {
    student_ptr = array;
    AddStudentDetails(student_ptr, sizeof(array) / sizeof(array[0]));
    PrintStudentDetails(student_ptr, sizeof(array) / sizeof(array[0]));
}

void PrintStudentDetails(struct student *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << ptr->name << std::endl;
        std::cout << ptr->id << std::endl;
        std::cout << ptr->grade << std::endl << std::endl;
        ptr++;
    }
}

void AddStudentDetails(struct student *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Add the Name: ";
        //scanf("%s", *ptr_name -> name)
        std::cin >> *ptr->name;
        std::cout << "Add the ID: ";
        std::cin >> ptr->id;
        std::cout << "Add the Grade: ";
        std::cin >> ptr->grade;
        std::cout << std::endl;
        ptr++;
    }
}
#include <iostream>
#include <cstring>

union family_name {
    char first_name[30];
    char last_name[30];
};

int main() {
    family_name f_name;
    strcpy(f_name.first_name, "Matthew Yung");
    std::cout << f_name.first_name << std::endl;
    std::cout << f_name.last_name << std::endl;
    std::cout << sizeof(f_name.first_name) << std::endl;
}
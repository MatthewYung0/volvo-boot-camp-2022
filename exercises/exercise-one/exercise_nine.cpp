#include <iostream>

int main() {
    float grade;
    std::cout << "Enter the students grade: ";
    scanf("%f", &grade);

    if (grade >= 85) {
        std::cout << "Excellent";
    } else if (grade < 85 && grade >= 75) {
        std::cout << "Very Good";
    } else if (grade < 65 && grade > 50) {
        std::cout << "Good";
    } else if (grade == 50) {
        std::cout << "Pass";
    } else {
        std::cout << "Fail";
    }
}
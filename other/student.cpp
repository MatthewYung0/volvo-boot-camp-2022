#include <iostream>

class Student
{
    private:
    int exam_scores[5];
    int sum;

    public:
    Student() {
        sum = 0;
    }

    void input() {
        scanf("%d %d %d %d %d", &exam_scores[0], &exam_scores[1], &exam_scores[2], &exam_scores[3], &exam_scores[4]);
    }

    int calculateTotalScore() {
        for (int i = 0; i < 5; i++) {
            sum += exam_scores[i];
        }
        return sum;
    }
};

int main() {

    int number_of_students = 0;

    std::cout << "Enter the number of students: " << std::endl;
    std::cin >> number_of_students;

    Student students[number_of_students];

    //Add the scores
    for (int i = 0; i < number_of_students; i++) {
        students[i].input();
    }
    for (int i = 0; i < number_of_students; i++) {
        std::cout << "The score is: " << students[i].calculateTotalScore() << std::endl;
    }
}
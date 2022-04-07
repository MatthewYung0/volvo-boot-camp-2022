#include <iostream>
#include <random>
#include <iterator>
#include <set>

int generateRandomNum(int min, int max)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(min, max);
    return uni(rng);
}

void findBounds(const int number, const std::set<int> *set)
{
    // Check to see if number exists in set first.
    std::set<int>::iterator it = --set->end();
    if (number > *it)
    {
        std::cout << number << " exceeds the highest number in the set which is " << *(set->rbegin()) << std::endl;
        return;
    }
    it = ++set->begin();
    if (number < *it)
    {
        std::cout << number << " exceeds the lowest number in the set which is " << *(set->begin()) << std::endl;
        return;
    }
    // Finds the lower bound in the set and prints it out.
    it = --set->lower_bound(number);
    std::cout << "The closest smallest number is " << *it << std::endl;
    it = set->upper_bound(number);
    // Finds the upper bound in the set and prints it out.
    std::cout << "The closest largest number is " << *it << std::endl;
}

int main()
{
    // Creating a set called list.
    std::set<int> list;

    // Populating number_list with 1024 random numbers from 0-100000.
    for (int i = 0; i < 1024; i++)
    {
        list.insert(generateRandomNum(1, 10000));
    }
    // Code below prints out numbers in set.
    /*     for (std::set<int>::iterator it = list.begin(); it != list.end(); it++) {
                std::cout << *it << std::endl;
            } */
    int number = 0;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> number;
    findBounds(number, &list);
    
}
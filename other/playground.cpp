#include <bits/stdc++.h>
#include <pthread.h>
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex global_mu;

void generateRandomNum(int min, int max, int *number)
{
    while (true) {
    global_mu.lock();
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(min, max);
    *number = uni(rng);
    global_mu.unlock();
    }
}

int main()
{
    int *int_pointer;
    int number = 0;
    int_pointer = &number;

    std::thread t1(generateRandomNum, 0, 3000, int_pointer);
	t1.detach();

    while(true) {
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        global_mu.lock();
        std::cout << *int_pointer << std::endl;
        global_mu.unlock();
    }
}


	

	// std::thread t1(generateRandomNum, 0, 3000, int_pointer);

	// while (true) {
	// 	std::cout << int_pointer << std::endl;
	// }
	// t1.detach();
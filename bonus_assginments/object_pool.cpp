#include <iostream>
#include <vector>
#include <string>

#define POOL_SIZE 3

class some_object {
private:
	int number = 0;
	std::string name;
	bool isUsed;
public:
	some_object() {
		this->isUsed = false;
	};
	some_object(std::string name, int number) {
		this->name = name;
		this->number = number;
		this->isUsed = false;
	}
	~some_object() {};

	int getNumber() {
		return number;
	}
	std::string getName() {
		return name;
	}
	bool getIsUsed() {
		return isUsed;
	}
	void setNumber(int number) {
		this->number = number;
	}
	void setName(std::string name) {
		this->name = name;
	}
	void setIsUsed(bool isUsed) {
		this->isUsed = isUsed;
	}
	void printVariables() {
		std::cout << "Name: " << this->getName() << " " << std::endl;
		std::cout << "Number: " << this->getNumber() << " " << std::endl;
		std::cout << "isUsed: " << this->getIsUsed() << " " << std::endl << std::endl;
	}
};

void printOptions() {
	std::cout << "\nChoose one of the following: \n";
	std::cout << "1. Borrow Object\n";
	std::cout << "2. Return Object\n";
	std::cout << "3. Print List of Objects\n";
	std::cout << "0. Exit\n\n";
}

bool checkAvailability(std::vector<some_object>& pool) {
	for (int i = 0; i < pool.size(); i++) {
		if (pool[i].getIsUsed() == false) {
			return true;
		}
	}
	return false;
}

void printInformation(std::vector<some_object>& pool) {
	for (int i = 0; i < pool.size(); i++) {
		pool[i].printVariables();
	}
}

int main() {
	int user_selection = -1;

	std::vector<some_object> pool;
	pool.push_back(some_object("Matthew", 50));
	pool.push_back(some_object("John", 60));
	pool.push_back(some_object("Philip", 50));

	while (user_selection != 0) {
		printOptions();
		std::string name;
		std::cin >> user_selection;
		std::cout << std::endl;
		switch (user_selection) {
		case 1: {
			// Checking if some objects are avaliable
			if (checkAvailability(pool)) {
				// If avaliable, take object using name as reference
				std::cout << "Select name to check out: ";
				std::cin.ignore();
				std::getline(std::cin, name);
				for (int i = 0; i < pool.size(); i++) {
					if (pool[i].getName() == name) {
						// Setting object as used
						pool[i].setIsUsed(true);
						std::cout << "\n" << pool[i].getName() << " has been checked out!\n";
						break;
					}
					if (i == pool.size() - 1) {
						std::cout << name << " does not exist!\n";
						break;
					}
				}
				
			}
			else {
				std::cout << "No avaliable objects\n";
			};
			break;
		}
		case 2: {
			std::cout << "Select name to check out: ";
			std::cin.ignore();
			std::getline(std::cin, name);
			for (int i = 0; i < pool.size(); i++) {
				if (pool[i].getName() == name) {
					// Setting object as not used
					pool[i].setIsUsed(false);
					std::cout << "\n" << pool[i].getName() << " has been checked in!\n";
					break;
				}
				else if (i == pool.size() - 1) {
					std::cout << "\n" << name << " does not exist, or is not being used.\n";
					break;
				}
				else {

				}
			}
			break;
		}
		case 3: {
			printInformation(pool);
			break;
		}
		}
	}
}
#include <iostream>
#include <string.h>

// Enum for holding payment method types.
enum payment_method
{
    cash = 1,
    credit = 2,
    debit = 3,
    voucher = 4
};

class Record
{
private:
    std::string name = "";       // Name of person
    int log_id;                  // Log ID
    long date;                   // Format: YYYYMMDD
    std::string services[5];     // name of services were performed.
    std::string parts[5];        // Name of parts changed (brake pads, tires)
    payment_method payment_type; // Type of payment made (i.e. credit, cash)
    float payment_amount;          // Payment amount (WHEN CHANGED TO FLOAT ON ENTIRE CODE, OUTPUT NOT CORRECT)
public:
    Record(){};
    // Intialising all variables except services and parts since it is an array
    Record(std::string name, int log_id, long date, payment_method payment_type, int payment_amount)
    {
        this->name = name;
        this->log_id = log_id;
        this->date = date;
        this->payment_type = payment_type;
        this->payment_amount = payment_amount;
    };
    ~Record() {}

    // Setters
    void setName(std::string name)
    {
        this->name = name;
    }
    void setLogID(int log_id)
    {
        this->log_id = log_id;
    }
    void setDate(int date)
    {
        this->date = date;
    }
    void setPaymentType(payment_method payment_type)
    {
        this->payment_type = payment_type;
    }
    void setPaymentAmount(float payment_amount)
    {
        this->payment_amount = payment_amount;
    }
    void setNumberOfParts()
    {
        int counter = 0;
        std::cin.clear();
        std::string user_input = " ";
        std::cout << "Parts: (Up to 5 parts. Press Enter when done. Press Enter again to exit) \n";
        std::cin.ignore();
        // Adding parts to parts array until 5 have been added, or when user presses enter again
        while (counter < sizeof(parts) / sizeof(parts[0]) && user_input != "")
        {
            std::getline(std::cin, user_input);
            parts[counter] = user_input;
            counter++;
        }
    }
    void setNumOfServices()
    {
        int counter = 0;
        std::cin.clear();
        std::string user_input = " ";
        std::cout << "Services: (Up to 5 services. Press Enter when done. Press Enter again to exit) \n";
        // Adding parts to services array until 5 have been added, or when user presses enter again
        while (counter < sizeof(services) / sizeof(services[0]) && user_input != "")
        {
            std::getline(std::cin, user_input);
            services[counter] = user_input;
            counter++;
        }
    }

    // Getters
    std::string getName()
    {
        return this->name;
    }
    int getLogID()
    {
        return this->log_id;
    }
    long getDate()
    {
        return this->date;
    }
    float getPaymentAmount()
    {
        return this->payment_amount;
    }
    std::string getPaymentType()
    {
        switch (this->payment_type)
        {
        case 1:
            return "Cash";
        case 2:
            return "Credit";
        case 3:
            return "Debit";
        case 4:
            return "Voucher";
        default:
            return "Not specified";
        }
    }
    void getNumberOfParts()
    {
        for (int i = 0; parts[i] != ""; i++)
        {
            std::cout << parts[i] << ", ";
        }
    }
    void getNumOfServices()
    {
        for (int i = 0; services[i] != ""; i++)
        {
            std::cout << services[i] << ", ";
        }
    }
    // Method for printing out all details
    void printInfo()
    {
        std::cout << "\nName: " << getName() << std::endl;
        std::cout << "Log ID: " << getLogID() << std::endl;
        std::cout << "Date: " << getDate() << std::endl;
        std::cout << "Payment Type: " << getPaymentType() << std::endl;
        std::cout << "Payment Amount: " << getPaymentAmount() << std::endl;
        std::cout << "Number of parts: ", getNumOfServices();
        std::cout << "\n";
        std::cout << "Types of services: ", getNumberOfParts();
        std::cout << "\n\n";
    }
};

void printMenu()
{
    std::cout << "\nChoose one of the following options:" << std::endl;
    std::cout << "1. Add new record\n";
    std::cout << "2. Print out records\n";
    std::cout << "3. Exit\n"
              << std::endl;
}

Record *createNewRecord()
{
    std::string name;
    int log_id = 0;
    long date = 0;
    int number_of_services = 0;
    int payment_type;
    float payment_amount = 0;

    Record *new_record_ptr = new Record;

    std::cout << "\nEnter the name of the person: ";
    std::cin.ignore();
    std::getline(std::cin, name, '\n');
    new_record_ptr->setName(name);

    std::cout << "Log ID: ";
    std::cin >> log_id;
    new_record_ptr->setLogID(log_id);

    std::cout << "Date: ";
    std::cin >> date;
    new_record_ptr->setDate(date);

    std::cout << "Payment type: (Enter number: 1-cash, 2-credit, 3-debit, 4-voucher) ";
    std::cin >> payment_type;
    new_record_ptr->setPaymentType((payment_method)payment_type);

    std::cout << "Payment amount: ";
    std::cin >> payment_amount;
    new_record_ptr->setPaymentAmount(payment_amount);

    new_record_ptr->setNumberOfParts();
    new_record_ptr->setNumOfServices();

    return new_record_ptr;
}

void run()
{
    // Creating an array to hold 5x Record objects
    Record *records = new Record[5];
    int input = 0;
    int counter = 0;
    while (input != 3)
    {
        printMenu();
        std::cin.clear();
        std::cin >> input;
        // If 1 is selected, created and fill the array
        if (input == 1)
        {
            Record *new_record_ptr = createNewRecord();
            records[counter] = *new_record_ptr;
            new_record_ptr++;
            counter++;
        }
        // If 2 is selected, print out the array
        else if (input == 2)
        {
            for (int i = 0; i < counter; i++)
            {
                records[i].printInfo();
            }
        }
        // If 3 is selected, delete the records array
        else if (input == 3)
        {
            delete[] records;
            std::cout << "\nRecords deleted!";
        }
    }
}

int main()
{
    run();
}
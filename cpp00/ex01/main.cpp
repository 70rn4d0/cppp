#include "Contact.hpp"
#include "PhoneBook.hpp"


int main(void)
{
    std::string input;
    PhoneBook phonebook;
    int i = 0;

    while (true)
    {
        std::cout << "The program only accepts ADD, SEARCH and EXIT : ";
        std::cin >> input;
        if (std::cin.eof())
            return 1;
        std::cin.ignore(1000, '\n');
        if (input == "ADD")
        {
            if (i == 8)
                i  = 0;
            if (add(&phonebook, i))
                i++;
            else
                return 1;
        }
        else if (input == "EXIT")
            break;
        else if(input == "SEARCH")
            if (search(phonebook))
                return 1;
    }
    return 0;
}

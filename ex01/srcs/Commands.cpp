#include "PhoneBook.hpp"

static void clear_input()
{
    std::cin.clear();
    clearerr(stdin);
}

std::string PhoneBook::prompt_non_empty(const std::string &prompt) 
{
    std::string input;

    std::cout << prompt;
    while (true)
    {
        
        if (!getline(std::cin, input))
        {
            clear_input();
            continue;
        }

        if (std::cin.eof())
        {
            clear_input();
            std::cout << "\n";
            std::cout << prompt;
            continue;
        }
    
        if (input.empty())
        {
            std::cout << "Null input, retry\n";
            std::cout << prompt;
            continue;
        }

        return input;
    }
}

void PhoneBook::phone_add(PhoneBook &book)
{
    system("clear");
    PhoneBook::print_header();

    std::cout << "\n[ADD] Enter new contact info:\n";

    std::string first = PhoneBook::prompt_non_empty("First name: ");
    std::string last = PhoneBook::prompt_non_empty("Last name: ");
    std::string nick = PhoneBook::prompt_non_empty("Nickname: ");
    std::string phone = PhoneBook::prompt_non_empty("Phone number: ");
    std::string secret = PhoneBook::prompt_non_empty("Darkest secret: ");

    Contact newContact;
    newContact.setInfo(first, last, nick, phone, secret);
    book.addContact(newContact);

    std::cout << "\nContact added successfully!\n";
}

void PhoneBook::phone_search(PhoneBook &book)
{
    int index;
    std::string input;

    system("clear");
    PhoneBook::print_header();

    std::cout << "\n[SEARCH] Contact list:\n";
    book.displayAll();

    std::cout << "Enter index to display (0 - 7): ";
    while (true)
    {

        if (!getline(std::cin, input))
        {
            clear_input();
            continue;
        }

        if (std::cin.eof())
        {
            clear_input();
            continue;
        }

        if (input.length() != 1 || input[0] < '0' || input[0] > '7')
        {
            std::cout << "Invalid index.\n";
            break;
        }

        index = input[0] - '0';
        book.displayContact(index);
        break;
    }
}

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : _currentIndex(0), _totalContacts(0) {}

void PhoneBook::addContact(const Contact& contact)
{
    _contacts[_currentIndex] = contact;
    _currentIndex = (_currentIndex + 1) % 8;
    if (_totalContacts < 8)
        _totalContacts++;
}

static std::string format_field(const std::string &str)
{
    const int width = 10;

    if (str.length() > width)
        return str.substr(0, width - 1) + ".";

    return std::string(width - str.length(), ' ') + str;
}

void PhoneBook::displayAll() const
{
    int i = 0;

    if (_totalContacts == 0)
    {
        std::cout << "No contacts available.\n";
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";

    while (i < _totalContacts)
    {
        std::cout << std::setw(10) << i << "|"
                  << format_field(_contacts[i].getFirstName()) << "|"
                  << format_field(_contacts[i].getLastName()) << "|"
                  << format_field(_contacts[i].getNickname()) << "\n";
        i++;
    }
}

void PhoneBook::displayContact(int index) const
{
    if (index < 0 || index >= _totalContacts)
    {
        std::cout << "Invalid index.\n";
        return;
    }
    _contacts[index].display();
}

void PhoneBook::print_header(void)
{
    std::cout << "=========================================\n";
    std::cout << "      WELCOME TO YOUR PHONEBOOK APP     \n";
    std::cout << "=========================================\n\n";
}

void PhoneBook::print_menu(void)
{
    std::cout << "Please select one Command:\n";
    std::cout << "  - ADD\n";
    std::cout << "  - SEARCH\n";
    std::cout << "  - EXIT\n\n";
    std::cout << "--> ";
}
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

static string format_field(const string &str)
{
    const int width = 10;

    if (str.length() > width)
        return str.substr(0, width - 1) + ".";

    return string(width - str.length(), ' ') + str;
}

void PhoneBook::displayAll() const
{
    int i = 0;

    if (_totalContacts == 0)
    {
        cout << "No contacts available.\n";
        return;
    }

    cout << setw(10) << "Index" << "|"
              << setw(10) << "First Name" << "|"
              << setw(10) << "Last Name" << "|"
              << setw(10) << "Nickname" << "\n";

    while (i < _totalContacts)
    {
        cout << setw(10) << i << "|"
                  << format_field(_contacts[i].getFirstName()) << "|"
                  << format_field(_contacts[i].getLastName()) << "|"
                  << format_field(_contacts[i].getNickname()) << "\n";
        i++;
    }
}

void PhoneBook::displayContact(int index) const {
    if (index < 0 || index >= _totalContacts)
    {
        cout << "Invalid index.\n";
        return;
    }
    _contacts[index].display();
}


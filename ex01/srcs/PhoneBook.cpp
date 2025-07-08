#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

void PhoneBook::addContact(const Contact& contact)
{
    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
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

    if (totalContacts == 0)
    {
        cout << "No contacts available.\n";
        return;
    }

    cout << setw(10) << "Index" << "|"
              << setw(10) << "First Name" << "|"
              << setw(10) << "Last Name" << "|"
              << setw(10) << "Nickname" << "\n";

    while (i < totalContacts)
    {
        cout << setw(10) << i << "|"
                  << format_field(contacts[i].getFirstName()) << "|"
                  << format_field(contacts[i].getLastName()) << "|"
                  << format_field(contacts[i].getNickname()) << "\n";
        i++;
    }
}

void PhoneBook::displayContact(int index) const {
    if (index < 0 || index >= totalContacts)
    {
        cout << "Invalid index.\n";
        return;
    }
    contacts[index].display();
}


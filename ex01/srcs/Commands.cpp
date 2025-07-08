#include "PhoneBook.hpp"

static void clear_input()
{
    cin.clear();
    clearerr(stdin);
}

string prompt_non_empty(const string &prompt) 
{
    string input;

    cout << prompt;
    while (true)
    {
        
        if (!getline(cin, input))
        {
            clear_input();
            continue;
        }

        if (cin.eof())
        {
            clear_input();
            cout << "\n";
            cout << prompt;
            continue;
        }
    
        if (input.empty())
        {
            cout << "Null input, retry\n";
            cout << prompt;
            continue;
        }

        return input;
    }
}

void phone_add(PhoneBook &book)
{
    system("clear");
    print_header();

    cout << "\n[ADD] Enter new contact info:\n";

    string first = prompt_non_empty("First name: ");
    string last = prompt_non_empty("Last name: ");
    string nick = prompt_non_empty("Nickname: ");
    string phone = prompt_non_empty("Phone number: ");
    string secret = prompt_non_empty("Darkest secret: ");

    Contact newContact;
    newContact.setInfo(first, last, nick, phone, secret);
    book.addContact(newContact);

    cout << "\nContact added successfully!\n";
}

void phone_search(PhoneBook &book)
{
    int index;
    string input;

    system("clear");
    print_header();

    cout << "\n[SEARCH] Contact list:\n";
    book.displayAll();

    cout << "Enter index to display (0 - 7): ";
    while (true)
    {

        if (!getline(cin, input))
        {
            clear_input();
            continue;
        }

        if (cin.eof())
        {
            clear_input();
            continue;
        }

        if (input.length() != 1 || input[0] < '0' || input[0] > '7')
        {
            cout << "Invalid index.\n";
            break;
        }

        index = input[0] - '0';
        book.displayContact(index);
        break;
    }
}

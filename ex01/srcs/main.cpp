#include "PhoneBook.hpp"

void print_header(void)
{
    cout << "=========================================\n";
    cout << "      WELCOME TO YOUR PHONEBOOK APP     \n";
    cout << "=========================================\n\n";
}

static void print_menu(void)
{
    cout << "Please select one Command:\n";
    cout << "  - ADD\n";
    cout << "  - SEARCH\n";
    cout << "  - EXIT\n\n";
    cout << "--> ";
}

int main(void)
{
    string select_mod;
    PhoneBook book;

    while (true)
    {
        system("clear");
        print_header();
        print_menu();

        if (!getline(cin, select_mod))
        {
            cin.clear();
            clearerr(stdin); 
            continue;
        }

        if (cin.eof())
        {
            cin.clear();
            clearerr(stdin);
            continue;
        }
    

        if (select_mod.empty())
            continue;

        if (select_mod == "ADD")
            phone_add(book);
        else if (select_mod == "SEARCH")
        {
            phone_search(book);
            cout << "\n--> ";
            if (!getchar())
            {
                cin.clear();
                clearerr(stdin); 
            }
        }
        else if (select_mod == "EXIT")
        {
            cout << "\nGoodbye!\n";
            break;
        }
    }
    return RETURN_SUCCESS;
}

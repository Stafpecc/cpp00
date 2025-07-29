#include "PhoneBook.hpp"

static void clear_screen();
static bool read_input(std::string& input);
static void handle_add(PhoneBook& book);
static void handle_search(PhoneBook& book);
static bool handle_command(const std::string& command,
            PhoneBook& book);

int main(void)
{
    std::string select_mod;
    PhoneBook book;

    while (true)
    {
        clear_screen();
        PhoneBook::print_header();
        PhoneBook::print_menu();

        if (!read_input(select_mod) || select_mod.empty())
            continue;

        if (!handle_command(select_mod, book))
            break;
    }
    return RETURN_SUCCESS;
}

static void clear_screen() { system("clear"); }

static bool read_input(std::string& input)
{
    if (!std::getline(std::cin, input))
    {
        std::cin.clear();
        clearerr(stdin);
        return false;
    }

    if (std::cin.eof())
    {
        std::cin.clear();
        clearerr(stdin);
        return false;
    }

    return true;
}

static void handle_add(PhoneBook& book) { book.phone_add(book); }

static void handle_search(PhoneBook& book)
{
    book.phone_search(book);
    std::cout << "\n--> ";
    getchar();
    std::cin.clear();
    clearerr(stdin);
}

static bool handle_command(const std::string& command, PhoneBook& book)
{
    if (command == "ADD")
        handle_add(book);
    else if (command == "SEARCH")
        handle_search(book);
    else if (command == "EXIT")
    {
        std::cout << "\nGoodbye!\n";
        return false;
    }
    return true;
}

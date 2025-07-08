#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <string>
#include <cstdlib>
#include <cstdio>

typedef enum e_rror
{
    RETURN_SUCCESS,
    RETURN_FAILURE
} t_rror;

class PhoneBook {
public:
    PhoneBook();
    void addContact(const Contact& contact);
    void displayAll() const;
    void displayContact(int index) const;

private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;
};

string  prompt_non_empty(const string &prompt);
void    phone_add(PhoneBook &book);
void    phone_search(PhoneBook &book);
void    print_header(void);

#endif

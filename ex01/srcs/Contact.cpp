#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setInfo(const string& first, const string& last, const string& nick,
                      const string& phone, const string& secret)
{
    first_name = first;
    last_name = last;
    nickname = nick;
    phone_number = phone;
    darkest_secret = secret;
}

void Contact::display() const
{
    cout << "First Name      : " << first_name << endl;
    cout << "Last Name       : " << last_name << endl;
    cout << "Nickname        : " << nickname << endl;
    cout << "Phone Number    : " << phone_number << endl;
    cout << "Darkest Secret  : " << darkest_secret << endl;
}

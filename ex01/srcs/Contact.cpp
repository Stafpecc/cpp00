#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setInfo(const string& first, const string& last, const string& nick,
                      const string& phone, const string& secret)
{
    _first_name = first;
    _last_name = last;
    _nickname = nick;
    _phone_number = phone;
    _darkest_secret = secret;
}

void Contact::display() const
{
    cout << "First Name      : " << _first_name << endl;
    cout << "Last Name       : " << _last_name << endl;
    cout << "_Nickname        : " << _nickname << endl;
    cout << "Phone Number    : " << _phone_number << endl;
    cout << "Darkest Secret  : " << _darkest_secret << endl;
}

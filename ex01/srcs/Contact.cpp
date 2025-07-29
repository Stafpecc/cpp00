#include "Contact.hpp"

Contact::Contact() {}

void Contact::setInfo(const std::string& first, const std::string& last, const std::string& nick,
                      const std::string& phone, const std::string& secret)
{
    _first_name = first;
    _last_name = last;
    _nickname = nick;
    _phone_number = phone;
    _darkest_secret = secret;
}

Contact::~Contact() {}

void Contact::display() const
{
    std::cout << "First Name      : " << _first_name << std::endl;
    std::cout << "Last Name       : " << _last_name << std::endl;
    std::cout << "_Nickname       : " << _nickname << std::endl;
    std::cout << "Phone Number    : " << _phone_number << std::endl;
    std::cout << "Darkest Secret  : " << _darkest_secret << std::endl;
}

std::string Contact::getFirstName() const { return _first_name; }
std::string Contact::getLastName() const { return _last_name; }
std::string Contact::getNickname() const { return _nickname; }
std::string Contact::getPhoneNumber() const { return _phone_number; }
std::string Contact::getDarkestSecret() const { return _darkest_secret; }
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

using namespace std;

class Contact {
    public:
        Contact();
        ~Contact();

        void setInfo(const string& first, const string& last, const string& nick,
                     const string& phone, const string& secret);
        void display() const;

        string getFirstName() const { return _first_name; }
        string getLastName() const { return _last_name; }
        string getNickname() const { return _nickname; }
        string getPhoneNumber() const { return _phone_number; }
        string getDarkestSecret() const { return _darkest_secret; }

    private:
        string _first_name;
        string _last_name;
        string _nickname;
        string _phone_number;
        string _darkest_secret;
};

#endif

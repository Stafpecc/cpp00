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

        string getFirstName() const { return first_name; }
        string getLastName() const { return last_name; }
        string getNickname() const { return nickname; }
        string getPhoneNumber() const { return phone_number; }
        string getDarkestSecret() const { return darkest_secret; }

    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
};

#endif

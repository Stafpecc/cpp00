#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    public:

        Contact();
        
           void setInfo(
                        const std::string& first,
                        const std::string& last,
                        const std::string& nick,
                        const std::string& phone,
                        const std::string& secret
                    );

        void        display() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;

        ~Contact();

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
};

#endif

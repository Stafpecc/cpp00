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

class PhoneBook
{
	public:

		PhoneBook();

		void			addContact(const Contact& contact);
		void			displayAll() const;
		void			displayContact(int index) const;
		void			phone_add(PhoneBook &book);
		void			phone_search(PhoneBook &book);
		std::string		prompt_non_empty(const std::string &prompt);

		static void		print_header(void);
		static void		print_menu(void);

	private:

		Contact	_contacts[8];
		int		_currentIndex;
		int		_totalContacts;
};

#endif

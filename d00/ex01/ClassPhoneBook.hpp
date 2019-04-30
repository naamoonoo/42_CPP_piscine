#ifndef CLASS_PHONE_BOOK_H
# define CLASS_PHONE_BOOK_H

#include <iostream>
#include "ClassContact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	*head;
		int		index;
		void	add_contact(std::string info[]);
		void	show_contact(int index);
};

#endif

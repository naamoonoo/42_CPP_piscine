#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->head = NULL;
	this->index = 0;
	return ;
};

PhoneBook::~PhoneBook(void)
{
	return ;
};

void	PhoneBook::add_contact(std::string info[])
{
	Contact *contact = new Contact(this->index++, info);
	contact->next = this->head;
	this->head = contact;
};

void	PhoneBook::show_contact(int index)
{
	int i;

	while(this->head->index != index)
		this->head = this->head->next;
	i = -1;
	while (++i < 11)
		std::cout << g_question[i] << " : " << head->contact_info[i] << std::endl;
}

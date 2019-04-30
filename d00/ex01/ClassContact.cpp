#include "ClassContact.hpp"

Contact::Contact(int index, std::string info[])
{
	int i;

	i = -1;
	while (++i < 11)
		this->contact_info[i] = info[i];
	this->index = index;
	this->next = NULL;
	return ;
};

Contact::~Contact(void){
	return ;
};

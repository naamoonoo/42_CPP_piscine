#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif

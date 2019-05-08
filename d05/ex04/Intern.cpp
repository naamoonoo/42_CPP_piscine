#include "Intern.hpp"

Intern::Intern()
{
	return;
};

Intern::~Intern()
{
	return;
};

Intern::Intern(Intern &other)
{
	*this = other;
	return;
};

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
};

Form *Intern::makeForm(std::string form, std::string target)
{
	if (!form.compare("shrubbery"))
		return new ShrubberyCreationForm(target);
	else if (!form.compare("robotomy"))
		return new RobotomyRequestForm(target);
	else if (!form.compare("presidential"))
		return new PresidentialPardonForm(target);
	else
		throw Intern::NonExistFormException();
};

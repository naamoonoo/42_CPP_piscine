#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("shrubbery", 25, 5), _target(target)
{
	return;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
	: Form(other)
{
	*this = other;
	return;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	_target = rhs._target;
	return *this;
};

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && getGradeForExcute() >= executor.getGrade())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
};

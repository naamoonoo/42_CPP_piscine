#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	setGrade(grade);
	return;
};

Bureaucrat::~Bureaucrat()
{
	return;
};

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	*this = other;
	return;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return *this;
};

std::string const Bureaucrat::getName() const
{
	return this->_name;
};

int Bureaucrat::getGrade() const
{
	return this->_grade;
};

void Bureaucrat::setGrade(int g)
{

	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = g;
};

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= 1;
};

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
};

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
	if (form.getIsSigned())
		std::cout << _name << " signs " << form.getName() << std::endl;
	else
		std::cout << _name << " cannot signs " << form.getName()
				  << " because sign grade is too high" << std::endl;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade()
	   << std::endl;
	return (os);
}

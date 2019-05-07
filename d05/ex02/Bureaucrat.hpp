#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

class Form;
#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

	Bureaucrat(){};

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat &other);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string const getName() const;
	int getGrade() const;
	void setGrade(int);
	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form);
	void executeForm(Form const &form);

	struct GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Exception Case :: Grade is Too High";
		}
	};
	struct GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Exception Case :: Grade is Too Low";
		}
	};
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &src);

#endif

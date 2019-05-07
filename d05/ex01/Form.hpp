#ifndef FORM_H
#define FORM_H

class Bureaucrat;
#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const _name;
	int const _grade_for_sign;
	int const _grade_for_excute;
	bool _is_signed;

	Form() : _grade_for_sign(1), _grade_for_excute(1){};

public:
	Form(std::string name, int g_sign, int g_exc);
	~Form();
	Form(Form &other);
	Form &operator=(Form const &rhs);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeForSign() const;
	int getGradeForExcute() const;

	void setGradeForSign(int);
	void setGradeForExcute(int);
	void beSigned(Bureaucrat &bureaucrat);

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

std::ostream &operator<<(std::ostream &os, const Form &src);

#endif

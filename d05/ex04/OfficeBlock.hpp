#ifndef OFFICE_BLOCK_H
#define OFFICE_BLOCK_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_sign_bure;
	Bureaucrat *_exec_bure;

public:
	OfficeBlock();
	OfficeBlock(Intern *intern, Bureaucrat *sign_bure, Bureaucrat *exec_bure);
	~OfficeBlock();

	void setIntern(Intern *intern);
	void setSignBureaucrat(Bureaucrat *bure);
	void setExecuteBureaucrat(Bureaucrat *bure);

	void doBureaucracy(std::string form, std::string target);

	struct NotEnoughEmployeeException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Exception Case :: Not Enough Employees to Work";
		}
	};
};

#endif

#ifndef CentralBureaucracy_H
#define CentralBureaucracy_H

#include <string>
#include <iostream>
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



class CentralBureaucracy
{
	OfficeBlock _office[20];
	int _idx_office;
	Intern _intern;
	typedef struct s_target	t_target;
	t_target *_targets;

public:
	CentralBureaucracy();
	~CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy &other);
	CentralBureaucracy &operator=(CentralBureaucracy const &rhs);

	void feed(Bureaucrat &sign, Bureaucrat &exec);
	void queueUp(std::string target);
	void doBureaucracy();

	struct NotEnoughSpaceException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Exception Case :: No More Space For Bureaucrat";
		}
	};
};

#endif

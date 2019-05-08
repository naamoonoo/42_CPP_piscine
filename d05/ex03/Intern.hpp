#ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	// private:
	// 	typedef struct s_dispatch_table t_dp;
	// 	t_dp _dp[3];

public:
	Intern();
	virtual ~Intern();
	Intern(Intern &other);
	Intern &operator=(Intern const &rhs);

	Form *makeForm(std::string form, std::string target);

	struct NonExistFormException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Exception Case :: Requested Form is not exist";
		}
	};
};

#endif

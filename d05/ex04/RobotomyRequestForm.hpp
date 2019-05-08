#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	virtual void execute(Bureaucrat const &executor) const;
};

#endif

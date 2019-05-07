#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("robotomy", 72, 45), _target(target)
{
	return;
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
	: Form(other)
{
	*this = other;
	return;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	_target = rhs._target;
	return *this;
};

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && getGradeForExcute() >= executor.getGrade())
	{
		std::cout << "drrrrr.....rr....rr.r.rrrr" << std::endl;
		std::cout << "drrrrr.....rr....rr.r.rrrr" << std::endl;
		std::cout << "drrrrr.....rr....rr.r.rrrr" << std::endl;
		if (std::rand() & 1)
			std::cout << "it's success!" << std::endl;
		else
			std::cout << "it's falied!" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
};

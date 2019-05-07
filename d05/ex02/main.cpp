#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

void checkShrubberyWork(std::string target, Bureaucrat &bure)
{
	std::cout << bure;
	std::cout << "[Try] Shrubbery working well or not with " << bure.getName() << std::endl;
	try
	{
		ShrubberyCreationForm form(target);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " sign on " << form.getName() << std::endl;
		bure.signForm(form);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " excute " << form.getName() << std::endl;
		bure.executeForm(form);
		std::ifstream i;
		i.open(target + "_shrubbery");
		std::cout << i.rdbuf();
		i.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------" << std::endl;
};

void checkRobotomyWork(std::string target, Bureaucrat &bure)
{
	std::cout << bure;
	std::cout << "[Try] RobotomyRequestForm working well or not with " << bure.getName() << std::endl;
	try
	{
		RobotomyRequestForm form(target);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " sign on " << form.getName() << std::endl;
		bure.signForm(form);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " excute " << form.getName() << std::endl;
		bure.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------" << std::endl;
};

void checkPresidentialWork(std::string target, Bureaucrat &bure)
{
	std::cout << bure;
	std::cout << "[Try] PresidentialPardonForm working well or not with " << bure.getName() << std::endl;
	try
	{
		PresidentialPardonForm form(target);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " sign on " << form.getName() << std::endl;
		bure.signForm(form);
		std::cout << form;
		std::cout << "[Try] " << bure.getName() << " excute " << form.getName() << std::endl;
		bure.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------" << std::endl;
};

int main()
{
	Bureaucrat andy("andy", 3);
	Bureaucrat foo("foo", 47);
	Bureaucrat bar("bar", 148);

	checkShrubberyWork("CASE A", andy);
	checkShrubberyWork("CASE B", foo);
	checkShrubberyWork("CASE C", bar);

	checkRobotomyWork("CASE A", andy);
	checkRobotomyWork("CASE B", foo);
	checkRobotomyWork("CASE C", bar);

	checkPresidentialWork("CASE A", andy);
	checkPresidentialWork("CASE B", foo);
	checkPresidentialWork("CASE C", bar);

	return 0;
}

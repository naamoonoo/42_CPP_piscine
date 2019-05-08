#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <string>
#include <iostream>

void checkInternWork(std::string form, std::string target, Bureaucrat &bure)
{
	Intern someRandomIntern;
	Form *rrf;
	try
	{
		rrf = someRandomIntern.makeForm(form, target);
		std::cout << *rrf;
		bure.signForm(*rrf);
		std::cout << *rrf;
		bure.executeForm(*rrf);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------------------" << std::endl;
}

int main()
{

	Bureaucrat andy("andy", 3);
	Bureaucrat foo("foo", 47);
	Bureaucrat bar("bar", 148);

	checkInternWork("shrubbery", "CASE A", andy);
	// checkInternWork("shrubbery", "CASE A", foo);
	// checkInternWork("shrubbery", "CASE A", bar);
	checkInternWork("robotomy", "CASE A", andy);
	checkInternWork("presidential", "CASE A", andy);
	checkInternWork("none existed", "CASE A", andy);

	return 0;
}


#include "OfficeBlock.hpp"
#include <string>
#include <iostream>

int main()
{
	Intern *intern = new Intern();
	Bureaucrat *sign = new Bureaucrat("signer", 20);

	OfficeBlock office(intern, sign, NULL);
	try
	{
		office.doBureaucracy("shrubbery", "CASE A");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat *exec = new Bureaucrat("executer", 3);
	office.setExecuteBureaucrat(exec);
	try
	{
		office.doBureaucracy("shrubbery", "CASE A");
		office.doBureaucracy("robotomy", "CASE A");
		office.doBureaucracy("presidential", "CASE A");
		office.doBureaucracy("not working!!", "CASE A");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

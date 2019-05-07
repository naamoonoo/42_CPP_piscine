#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

void trySignForm(std::string name, int g_sign, int g_exe, Bureaucrat &bure)
{
	std::cout << "Try with name :" << name << " sign grade :" << g_sign
			  << " and execute grade :" << g_exe << std::endl;
	try
	{
		Form form(name, g_sign, g_exe);
		std::cout << form;
		bure.signForm(form);
		std::cout << form;
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
	trySignForm("a", 4, 3, andy);
	trySignForm("a", 2, 1, andy);
	trySignForm("a", 1, 0, andy);
	trySignForm("a", 151, 150, andy);

	return 0;
}

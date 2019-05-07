#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

void tryBureaucrat(std::string name, int grade)
{
	std::cout << name << " with grade [" << grade << "] trial !" << std::endl;

	try
	{
		Bureaucrat cog(name, grade);
		std::cout << cog;
		cog.incrementGrade();
		std::cout << cog;
		cog.incrementGrade();
		std::cout << cog;
		cog.decrementGrade();
		std::cout << cog;
		cog.decrementGrade();
		std::cout << cog;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------------------" << std::endl;
};

int main()
{
	tryBureaucrat("table", 0);
	tryBureaucrat("book", 1);
	tryBureaucrat("pc", 42);
	tryBureaucrat("paper", 150);
	tryBureaucrat("shoes", 200);
	return 0;
}

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("shrubbery", 145, 137), _target(target)
{
	return;
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
	: Form(other)
{
	*this = other;
	return;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	_target = rhs._target;
	return *this;
};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && getGradeForExcute() >= executor.getGrade())
	{
		std::ofstream f;
		f.open(_target + "_shrubbery");
		f << "       _-_" << std::endl;
		f << "    /~~   ~~\\" << std::endl;
		f << "  /~~       ~~\\" << std::endl;
		f << " {             }" << std::endl;
		f << "  \\  _-     -_/" << std::endl;
		f << "    \\_-   -_/" << std::endl;
		f << "   ~  \\\\ //  ~" << std::endl;
		f << " _- -  | | _- _" << std::endl;
		f << "   _ - | |   -_" << std::endl;
		f << "      // \\\\" << std::endl;
		f.close();
	}
	else
		throw Form::GradeTooLowException();
};

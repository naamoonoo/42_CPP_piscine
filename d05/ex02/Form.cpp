#include "Form.hpp"

Form::Form(std::string name, int g_sign, int g_exc)
	: _name(name), _grade_for_sign(g_sign), _grade_for_excute(g_exc), _is_signed(false)
{
	if (g_sign < 1 || g_exc < 1)
		throw Form::GradeTooHighException();
	else if (g_sign > 150 || g_exc > 150)
		throw Form::GradeTooLowException();
	return;
};

Form::~Form()
{
	return;
};

Form::Form(Form &other)
	: _name(other._name), _grade_for_sign(other._grade_for_sign),
	  _grade_for_excute(other._grade_for_excute), _is_signed(other._is_signed)
{
	*this = other;
	return;
};

Form &Form::operator=(Form const &rhs)
{
	_is_signed = rhs._is_signed;
	return *this;
};

std::string Form::getName() const
{
	return _name;
};

bool Form::getIsSigned() const
{
	return _is_signed;
};

int Form::getGradeForSign() const
{
	return _grade_for_sign;
};

int Form::getGradeForExcute() const
{
	return _grade_for_excute;
};

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_for_sign)
		_is_signed = true;
	else
		throw Form::GradeTooLowException();
};

std::ostream &operator<<(std::ostream &os, const Form &src)
{
	os << src.getName() << " has sign grade [" << src.getGradeForSign()
	   << "] and execute grade [" << src.getGradeForExcute() << "], and it is ";
	if (src.getIsSigned())
		os << "signed" << std::endl;
	else
		os << "not signed" << std::endl;
	return os;
}

#ifndef INTERN_H
#define INTERN_H

class Form;
#include <string>
#include <iostream>
#include "Form.hpp"

class Intern
{

public:
	Intern(){};
	~Intern();
	Intern(Intern &other);
	Intern &operator=(Intern const &rhs);
};
// std::ostream &operator<<(std::ostream &os, const Intern &src);

#endif

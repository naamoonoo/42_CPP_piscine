#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _sign_bure(NULL), _exec_bure(NULL)
{
	return;
};

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *sign_bure,
						 Bureaucrat *exec_bure)
	: _intern(intern), _sign_bure(sign_bure), _exec_bure(exec_bure)

{
	return;
};
OfficeBlock::~OfficeBlock()
{
	return;
};

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	if (!_intern || !_sign_bure || !_exec_bure)
		throw OfficeBlock::NotEnoughEmployeeException();
	else
	{
		Form *f = _intern->makeForm(form, target);
		_sign_bure->signForm(*f);
		_exec_bure->executeForm(*f);
	}
};

void OfficeBlock::setIntern(Intern *intern)
{
	_intern = intern;
};
void OfficeBlock::setSignBureaucrat(Bureaucrat *bure)
{
	_sign_bure = bure;
};
void OfficeBlock::setExecuteBureaucrat(Bureaucrat *bure)
{
	_exec_bure = bure;
};

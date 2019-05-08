#include "CentralBureaucracy.hpp"

typedef struct		s_target
{
	std::string		target;
	struct s_target	*next;
}					t_target;

CentralBureaucracy::CentralBureaucracy(){
	_idx_office = 0;
	_intern = Intern();
	return ;
};

CentralBureaucracy::~CentralBureaucracy(){

	while (_targets)
	{
		t_target *tmp = _targets;
		_targets = _targets->next;
		delete tmp;
	}
	return ;
};

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy &other){
	*this = other;
	return ;
};

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &rhs)
{
	(void)rhs;
	return *this;
};


void CentralBureaucracy::feed(Bureaucrat &sign, Bureaucrat &exec){
	if (_idx_office < 20)
	{
		_office[_idx_office].setIntern(&_intern);
		_office[_idx_office].setSignBureaucrat(&sign);
		_office[_idx_office].setExecuteBureaucrat(&exec);
		_idx_office++;
	}
	else
	{
		throw CentralBureaucracy::NotEnoughSpaceException();
	}
};

void CentralBureaucracy::queueUp(std::string target){
	if (_targets == NULL)
	{
		_targets = new t_target;
		_targets->target = target;
		_targets->next = NULL;
	}
	else
	{
		t_target *tmp = _targets;
		while(tmp->next)
			tmp = tmp->next;
		tmp->next = new t_target;
		tmp->next->target = target;
		tmp->next->next = NULL;
	}
};

void CentralBureaucracy::doBureaucracy(){
	std::string forms[3] = {"shrubbery", "robotomy", "presidential"};
	int i;
	while(_targets)
	{
		std::cout << _targets->target << std::endl;
		std::string form = forms[std::rand() % 3];
		std::cout << "form is " << form << std::endl;
		i = 0;
		while (i < _idx_office)
		{
			try
			{
				_office[i].doBureaucracy(form, _targets->target);
				break;
			}
			catch(const std::exception& e)
			{
				i++;
				std::cerr << e.what() << '\n';
			}
		}
		_targets = _targets->next;
		std::cout << "-----------------------------------" << std::endl;
	}
};

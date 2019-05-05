#include "Squad.hpp"

Squad::Squad() : _count(0), _units(NULL) {
	return ;
};

Squad::~Squad(){

	while (this->_units)
	{
		t_units *tmp = this->_units;
		delete this->_units->unit;
		delete this->_units;
		this->_units = tmp->next;
	}
	return ;
};

Squad::Squad(Squad & other){
	*this = other;
	return ;
};

Squad& Squad::operator=(Squad const & other){
	this->_count = other._count;
	this->_units = other._units;
	return *this;
};

int Squad::getCount() const{
	return this->_count;
};

ISpaceMarine* Squad::getUnit(int idx) const{

	if (idx > this->_count)
		return NULL;
	int i = -1;
	t_units *tmp = this->_units;
	while (idx < this->_count && ++i < idx)
		tmp = tmp->next;
	return tmp->unit;

};

int Squad::push(ISpaceMarine* unit){
	if (this->_units == NULL)
	{
		this->_units = new t_units;
		this->_units->unit = unit;
		this->_units->next = NULL;
		this->_count += 1;
	}
	else
	{
		t_units *tmp = this->_units;
		while(tmp->next)
			tmp = tmp->next;
		tmp->next = new t_units;
		tmp->next->unit = unit;
		tmp->next->next = NULL;
		this->_count += 1;
	}
	return this->_count;
};


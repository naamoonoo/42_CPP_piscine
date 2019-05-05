#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _idx(0){
	return ;
};

MateriaSource::~MateriaSource(){
	int i = -1;
	while (++i < this->_idx)
		delete _m[i];
	return ;
};

MateriaSource::MateriaSource(MateriaSource & other){
	*this = other;
	return ;
};

MateriaSource&	MateriaSource::operator=(MateriaSource const & other){
	this->_idx = other._idx;
	return *this;
};

void MateriaSource::learnMateria(AMateria* m){
	if (this->_idx == 3)
		return ;
	this->_m[this->_idx++] = m;
};

AMateria* MateriaSource::createMateria(std::string const & type){
	if (type.compare("ice") == 0)
		return new Ice();
	else if (type.compare("cure") == 0)
		return new Cure();
	return NULL;
};


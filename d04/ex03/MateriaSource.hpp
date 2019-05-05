#ifndef MATERIAL_SOURCE_H
# define MATERIAL_SOURCE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_m[4];
		int			_idx;

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource & other);
		MateriaSource&	operator=(MateriaSource const & other);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif

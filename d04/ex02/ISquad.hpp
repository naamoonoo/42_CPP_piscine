#ifndef I_SQUAD_H
# define I_SQUAD_H

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif

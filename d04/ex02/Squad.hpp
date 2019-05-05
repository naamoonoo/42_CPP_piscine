#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int	_count;
		typedef	struct		s_units
		{
			ISpaceMarine*	unit;
			struct s_units*	next;
		}					t_units;
		t_units*			_units;
		// ISpaceMarine*	_units;
		// this->_units = new ISpaceMarine[this->_count + 1];
		// It's not working! b/c they don't have default constructor

	public:
		Squad() ;
		virtual ~Squad() ;
		Squad(Squad & other);

		Squad& operator=(Squad const & other);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
};

#endif

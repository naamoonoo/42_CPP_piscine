#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(int i);
		Fixed(float f);
		Fixed(Fixed const & other);
		~Fixed(void);

		Fixed&	operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;

	private:
		int		_fixedPointValue;
		static const int _fractionalBit;
};

std::ostream&	operator<<(std::ostream &o, Fixed const & src);

#endif

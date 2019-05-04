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
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;

		static	Fixed&	min(Fixed& f1, Fixed& f2);
		static	Fixed&	max(Fixed& f1, Fixed& f2);
		const static	Fixed&	min(Fixed const & f1, Fixed const & f2);
		const static	Fixed&	max(Fixed const & f1, Fixed const & f2);

	private:
		int		_fixedPointValue;
		static const int _fractionalBit;
};

std::ostream&	operator<<(std::ostream &o, Fixed const & src);

#endif

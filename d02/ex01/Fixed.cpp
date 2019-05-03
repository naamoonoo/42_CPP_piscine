#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
};
Fixed::Fixed(int i) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = i << _fractionalBit;
};

Fixed::Fixed(float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(f * (1 <<_fractionalBit));
};


Fixed::Fixed(Fixed const & other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
};

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
};

Fixed::~Fixed(void){
	std::cout << "Destruction called" << std::endl;
	return ;
};

int		Fixed::getRawBits(void) const{
	return this->_fixedPointValue;
};

void	Fixed::setRawBits(int const raw){
	this->_fixedPointValue = raw;
};

float 	Fixed::toFloat( void ) const{
	return ((float)(this->_fixedPointValue) / (1 << _fractionalBit));
};

int 	Fixed::toInt( void ) const{
	return ((int)(this->_fixedPointValue >> _fractionalBit));
};

std::ostream&	operator<<(std::ostream& o, Fixed const & src)
{
	o << src.toFloat();
	return 		o;
};



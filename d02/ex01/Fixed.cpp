#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
};
Fixed::Fixed(int i) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(i);
};

Fixed::Fixed(float f) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(1 * roundf(f));
};


Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
};

Fixed	&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
};

Fixed::~Fixed(void){
	std::cout << "Destruction called" << std::endl;
	return ;
};

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
};

void	Fixed::setRawBits(int const raw){
	this->_fixedPointValue = raw;
};

std::ostream	&	operator<<(std::ostream o, Fixed const & src)
{
	o << src.getRawBits();
	return o;
};



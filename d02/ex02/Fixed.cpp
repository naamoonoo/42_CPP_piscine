#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {
	return ;
};
Fixed::Fixed(int i) {
	this->_fixedPointValue = i << _fractionalBit;
	return ;
};

Fixed::Fixed(float f) {
	this->_fixedPointValue = roundf(f * (1 <<_fractionalBit));
	return ;
};

Fixed::Fixed(Fixed const & other){
	*this = other;
	return ;
};

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
};

Fixed	Fixed::operator+(Fixed const & rhs)	const
{
	return Fixed(this->toFloat() + rhs.toFloat());
};

Fixed	Fixed::operator-(Fixed const & rhs)	const
{
	return Fixed(this->toFloat() - rhs.toFloat());
};

Fixed	Fixed::operator*(Fixed const & rhs)	const
{
	return Fixed(this->toFloat() * rhs.toFloat());
};

Fixed	Fixed::operator/(Fixed const & rhs)	const
{
	return Fixed(this->toFloat() / rhs.toFloat());
};

bool	Fixed::operator>(Fixed const & rhs) const{
	return (this->getRawBits() > rhs.getRawBits());
};

bool	Fixed::operator<(Fixed const & rhs) const{
	return (this->getRawBits() < rhs.getRawBits());
};

bool	Fixed::operator>=(Fixed const & rhs) const{
	return (this->getRawBits() >= rhs.getRawBits());
};

bool	Fixed::operator<=(Fixed const & rhs) const{
	return (this->getRawBits() <= rhs.getRawBits());
};

bool	Fixed::operator==(Fixed const & rhs) const{
	return (this->getRawBits() == rhs.getRawBits());
};

bool	Fixed::operator!=(Fixed const & rhs) const{
	return (this->getRawBits() != rhs.getRawBits());
};

Fixed&	Fixed::operator++(void){
	this->setRawBits(this->getRawBits() + 1);
	return *this;
};

Fixed&	Fixed::operator--(void){
	this->setRawBits(this->getRawBits() - 1);
	return *this;
};

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++*this;
	return tmp;
};

Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--*this;
	return tmp;
};

Fixed::~Fixed(void){
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

Fixed&	Fixed::min(Fixed& f1, Fixed& f2){
	return f1 >= f2 ? f1 : f2;
};

Fixed&	Fixed::max(Fixed& f1, Fixed& f2){
	return f1 >= f2 ? f1 : f2;
};

const Fixed&	Fixed::min(Fixed const & f1, Fixed const & f2){
	return f1 >= f2 ? f1 : f2;
};

const Fixed&	Fixed::max(Fixed const & f1, Fixed const & f2){
	return f1 >= f2 ? f1 : f2;
};

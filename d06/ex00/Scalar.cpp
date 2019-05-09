#include "Scalar.hpp"

Scalar::Scalar(){
	return ;
};

Scalar::~Scalar(){
	return ;
};

Scalar::Scalar(std::string str) {
	_value = atof(str.c_str());
	setPrecision(str);
	std::cout << std::fixed << std::setprecision(_precision);
	return ;
};

Scalar::Scalar(Scalar & other){
	*this = other;
};

Scalar& Scalar::operator=(Scalar const & rhs){
	_value = rhs._value;
	return *this;
};

void	Scalar::setPrecision(std::string str)
{
	size_t	idx = str.find('.');
	if (idx != std::string::npos)
	{
		_precision = 0;
		while (std::isdigit(str[++idx]))
			_precision += 1;
	}
	else
		_precision = 1;
}

char	Scalar::toChar(){
	if (std::isnan(_value))
		throw Scalar::ImpossibleConversionException();
	else if(!std::isprint(_value))
		throw Scalar::NonDisplayableException();
	else
		return static_cast<char>(_value);
};

int		Scalar::toInt(){
	if (std::isnan(_value))
		throw Scalar::ImpossibleConversionException();
	else if(_value < INT_MIN || _value > INT_MAX)
		throw Scalar::ImpossibleConversionException();
	else
		return static_cast<int>(_value);
};

float	Scalar::toFloat(){
	return static_cast<float>(_value);
};

double	Scalar::toDouble(){
	return static_cast<double>(_value);
};

void	Scalar::showCharConverted(){
	std::cout << "char : ";
	try
	{
		_char = toChar();
		std::cout << "'" << _char << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
};

void	Scalar::showIntConverted(){
	std::cout << "int : ";
	try
	{
		_int = toInt();
		std::cout << _int << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
};

void	Scalar::showFloatConverted(){
	std::cout << "float : ";
	_float = toFloat();
	std::cout << _float << "f" << std::endl;

};

void	Scalar::showDoubleConverted(){
	std::cout << "double : ";
	_double = toDouble();
	std::cout << _double << std::endl;
};



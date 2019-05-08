#include "Scalar.hpp"

Scalar::Scalar(){
	return ;
};

Scalar::~Scalar(){
	return ;
};

Scalar::Scalar(std::string str) {
	_input = str;
	_pure = makePure();
	// std::cout << "converted into : " << _pure << std::endl;
	return ;
};

Scalar::Scalar(Scalar & other){
	*this = other;
};

Scalar& Scalar::operator=(Scalar const & rhs){
	_pure = rhs._pure;
	return *this;
};

std::string	Scalar::makePure(){
	// if (_input.size() == 1 && _input[0] >= 32 && _input[0] <= 126)
	// 	return _input;
	if (is_special(_input))
		return _input[0] == '-' ? _input.substr(0, 4) : _input.substr(0, 3);

	int i = 0;
	std::string res;
	while(isdigit(_input[i]) || _input[i] == '.')
		res += _input[i++];
	return res;
};

bool	Scalar::is_special(std::string input)
{
	std::string sub;
	if (input[0] == '-')
		sub = input.substr(1, 3);
	else
		sub = input.substr(0, 3);
	return (!sub.compare("nan") || !sub.compare("-inf") || !sub.compare("inf"));
}

void	Scalar::toChar(){
	if (is_special(_pure)){
		std::cout<< "char: impossible" << std::endl;
		return;
	}
	std::stringstream ss(_pure);
	int n;
	ss >> n;

	if ((n >= 0 && n < 32) || n == 127) // 127 should be non dis
		std::cout<< "char: Non displayable" << std::endl;
	else if (n >= 32 && n <= 126)
		std::cout << "char: '"<< (char)n <<"'" << std::endl;
	else
		std::cout<< "char: impossible" << std::endl;
};

void	Scalar::toInt(){
	if (is_special(_pure)){
		std::cout<< "int: impossible" << std::endl;
		return;
	}

	std::stringstream ss(_pure);
	int n;

	ss >> n;
	if (n > INT_MIN && n < INT_MAX)
		std::cout << "int: " << n << std::endl;
	else
		std::cout<< "int: impossible" << std::endl;
};

void	Scalar::toFloat(){
	std::string append;

	//42.
	//min float && max float

	if (is_special(_pure) || _pure.find('.') != std::string::npos)
		append = "f";
	else
		append = ".0f";

	std::cout<< "float: " << _pure + append << std::endl;
};

void	Scalar::toDouble(){
	std::string append;

	if (!is_special(_pure) && _pure.find('.') == std::string::npos)
		append = ".0";


	std::cout<< "double: " << _pure + append << std::endl;
};

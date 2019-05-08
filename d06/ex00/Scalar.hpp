#ifndef SCALAR_H
# define SCALAR_H

#include <string>
#include <sstream>
#include <iostream>

class Scalar
{
	private:
		std::string _input;
		std::string _pure;

	public:
		Scalar();
		~Scalar();
		Scalar(std::string str);
		Scalar(Scalar & other);
		Scalar& operator=(Scalar const & rhs);

		std::string	makePure();
		bool	is_special(std::string input);
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();

};
#endif

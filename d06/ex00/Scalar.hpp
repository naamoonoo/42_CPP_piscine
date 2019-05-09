#ifndef SCALAR_H
# define SCALAR_H

#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
# include <iomanip>
# include <climits>

// # include <cmath>



class Scalar
{
	private:
		double _value;
		char _char;
		int _int;
		float _float;
		double _double;
		int	_precision;


	public:
		Scalar();
		~Scalar();
		Scalar(std::string str);
		Scalar(Scalar & other);
		Scalar& operator=(Scalar const & rhs);

		void	setPrecision(std::string str);

		char	toChar();
		int		toInt();
		float	toFloat();
		double	toDouble();

		void	showCharConverted();
		void	showIntConverted();
		void	showFloatConverted();
		void	showDoubleConverted();

		struct ImpossibleConversionException : public std::exception
		{
		public:
			virtual const char *what() const throw()
			{
				return "impossible";
			}
		};
		struct NonDisplayableException : public std::exception
		{
		public:
			virtual const char *what() const throw()
			{
				return "Non displayable";
			}
		};


};
#endif

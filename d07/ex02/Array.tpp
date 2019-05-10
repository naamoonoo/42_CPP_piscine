#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		unsigned int _n;
		T*	_arr;

	public:

		Array() : _n(0), _arr(new T[0]) {};
		Array(unsigned int n) : _n(n), _arr(new T[n]) {};
		~Array() { delete [] _arr; };
		Array(Array & rhs) { *this = rhs; };
		Array&	operator=(Array const & rhs) {
			_n = rhs._n;
			_arr = rhs._arr;
			return *this;
		};
		T&		operator[](unsigned int idx) {
			if (idx >= _n)
				throw Array::IlligalAccessException();
			else
				return _arr[idx];
		};

		unsigned int size() { return _n; };


		struct IlligalAccessException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Segment Falut :: Try to access non-exist memory";
			}
		};


};

#endif

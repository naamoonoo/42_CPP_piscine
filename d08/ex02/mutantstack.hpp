#ifndef MUTANT_STACK_H
#define MUTANT_STACK_H

#include <stack>
#include <list>
#include <iostream>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::stack<T>	_stack;
		std::list<T>	_lst;

	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack(MutantStack const & rhs){
			*this = rhs;
		};
		MutantStack&	operator=(MutantStack const & rhs){
			std::stack<T>(rhs._stack);
			return *this;
		};

		void	push(T ele){
			_stack.push(ele);
			_lst.push_back(ele);
		}

		void	pop(){
			_stack.pop();
			_lst.pop_front();
		}

		T const top(){
			return _stack.top();
		}

		size_t	size(){
			return _stack.size();
		}

		bool empty(){
			return _stack.empty();
		}

		typedef typename std::list<T>::iterator iterator;

		iterator begin(){
			return _lst.begin();
		}

		iterator end(){
			return _lst.end();
		}
};

#endif


#ifndef FT_STACK_H
# define FT_STACK_H

# include <string>
# include <iostream>

typedef struct		s_node
{
	std::string		data;
	struct s_node	*next;
}					t_node;

class FtStack
{
	private:
		s_node	*_top;
		int		_count;

	public:
		FtStack() : _top(NULL), _count(0) {};
		~FtStack() {};
		void	push(std::string data);
		std::string	pop();
		s_node*	peek();
		bool	isEmpty();
		void	show();

};

#endif

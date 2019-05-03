#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

#include <sstream>
#include "Fixed.hpp"
#include "FtStack.hpp"

class EvalExpr
{
	private:
		std::string *_expr;
		int			_size;

	public:
		EvalExpr(int size);
		~EvalExpr();
		std::string	getData(int idx);
		void		setData(int idx, std::string data);
		void		getAnswer();
		void		make_expr(std::string eval);
		int			exprOrder(std::string expr);
		bool		isOp(std::string expr);
};

#endif

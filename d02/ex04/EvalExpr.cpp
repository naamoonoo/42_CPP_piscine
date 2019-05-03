#include "EvalExpr.hpp"

EvalExpr::EvalExpr(int size) {
	this->_size = size;
	this->_expr = new std::string[size];
	return ;
};

EvalExpr::~EvalExpr() {
	return ;
};

std::string	EvalExpr::getData(int idx){
	return this->_expr[idx];
};

void		EvalExpr::setData(int idx, std::string data){
	this->_expr[idx] = data;
};

void	EvalExpr::getAnswer(){
	int i;
	float a;
	float b;

	i = 0;
	while (i < this->_size)
	{
		if (i == this->_size - 1)
			a = this->getData(i);

	}
};

int EvalExpr::exprOrder(std::string expr)
{
	if (!expr.compare("*") || !expr.compare("/") || !expr.compare("%"))
		return 2;
	else if (!expr.compare("+") || !expr.compare("-"))
		return 1;
	else if (!expr.compare("(") || !expr.compare(")"))
		return 0;
	else
		return 3;
}

bool		isOp(std::string expr)
{
	return (!expr.compare("*") || !expr.compare("/") || !expr.compare("%") ||
		!expr.compare("+") || !expr.compare("-"));
}

void	EvalExpr::make_expr(std::string eval)
{
	std::stringstream ss;
	std::string tmp;
	FtStack	*stack = new FtStack();

	ss << eval;
	int i = 0;

	while (ss >> tmp)
	{
		if (this->exprOrder(tmp) == 3)
			this->setData(i++, tmp);
		else
		{
			if (!tmp.compare("("))
				stack->push(tmp);
			else if (!tmp.compare(")"))
			{
				while (stack->peek()->data.compare("("))
				{

					tmp = stack->pop();
					if (this->exprOrder(tmp) != 0)
						this->setData(i++, tmp);
				}
			}
			else if (stack->isEmpty())
				stack->push(tmp);
			else
			{
				if (this->exprOrder(stack->peek()->data) >= this->exprOrder(tmp))
					this->setData(i++, stack->pop());
				stack->push(tmp);
			}
		}
	}
	while (stack->peek())
	{
		tmp = stack->pop();
		if (this->exprOrder(tmp) != 0)
			this->setData(i++, tmp);
	}
}

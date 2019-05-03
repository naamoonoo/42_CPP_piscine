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

Fixed		EvalExpr::getFixed(std::string n)
{
	std::stringstream ss(n);
	float f;

	ss >> f;
	return Fixed(f);
}

std::string	EvalExpr::doOp(int idx)
{
	std::stringstream ss;
	Fixed a = this->getFixed(this->getData(idx - 2));
	Fixed b = this->getFixed(this->getData(idx - 1));
	if (!this->getData(idx).compare("*"))
		ss << a * b;
	else if (!this->getData(idx).compare("+"))
		ss << a + b;
	else if (!this->getData(idx).compare("-"))
		ss << a - b;
	else if (!this->getData(idx).compare("/"))
		ss << a / b;
	std::string str = ss.str();
	return str;
}

void	EvalExpr::makeNewData(int idx, std::string data){
	std::string *tmp = new std::string[this->_size - 2];
	int i = -1;
	int j = 0;
	while (++i < idx)
		tmp[j++] = this->getData(i);
	tmp[j++] = data;
	i += 2;
	while (++i < this->_size)
		tmp[j++] = this->getData(i);
	delete [] this->_expr;
	this->_size -= 2;
	this->_expr = tmp;
};

void	EvalExpr::getAnswer(){
	int i;

	i = 0;
	if (this->_expr[1].empty())
	{
		std::cout << this->getData(0);
	}
	else
	{
		while (i < this->_size)
		{
			if (this->isOp(this->getData(i)))
			{
				this->makeNewData(i - 2, this->doOp(i));
				return this->getAnswer();
			}
			i++;
		}
	}
};

void	EvalExpr::showData()
{
	int i;

	i = -1;
	while(++i < this->_size)
		std::cout << this->getData(i) << std::endl;
};

int		EvalExpr::exprOrder(std::string expr)
{
	if (!expr.compare("*") || !expr.compare("/"))
		return 2;
	else if (!expr.compare("+") || !expr.compare("-"))
		return 1;
	else if (!expr.compare("(") || !expr.compare(")"))
		return 0;
	else
		return 3;
}

bool	EvalExpr::isOp(std::string expr)
{
	return (!expr.compare("*") || !expr.compare("/") ||
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

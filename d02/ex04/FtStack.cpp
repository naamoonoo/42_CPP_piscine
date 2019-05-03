#include "FtStack.hpp"

void	FtStack::push(std::string data){
	s_node *node = new s_node;
	node->data = data;
	node->next = this->_top;
	this->_top = node;
	this->_count += 1;
};

std::string	FtStack::pop() {
	if (isEmpty())
		return NULL;
	s_node *tmp = this->_top;
	this->_top = this->_top->next;
	std::string data = tmp->data;
	delete tmp;
	this->_count -= 1;
	return data;
};

s_node*	FtStack::peek(){
	if (!isEmpty())
		return this->_top;
	else
		return NULL;
};

bool	FtStack::isEmpty() {
	return this->_count == 0;
};

void	FtStack::show() {
	while (this->_top)
	{
		std::cout << this->_top->data << std::endl;
		this->_top = this->_top->next;
	}
}

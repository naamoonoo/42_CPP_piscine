/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:54:47 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:27:50 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age) : _name(name), _age(age)
{
	std::cout << this->_name << "(" << this->_age << ") pony has come!" << std::endl;
	return ;
};

Pony::~Pony()
{
	std::cout << this->_name << " pony passed away" << std::endl;
	return ;
};

void	Pony::gettingOlder()
{
	this->_age += 1;
	std::cout << "pony is grown up, now " << this->_name << " is " << this->_age << " years old" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:59:52 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:52:32 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){
	std::cout << "Human created" << std::endl;
	this->_brain = new Brain(std::rand() % 10);
};

Human::~Human(){
	std::cout << "Human deleted" << std::endl;
};

std::string	Human::identify(){
	std::stringstream ss;

	ss << this;
	std::string s = ss.str();
	return s;
};

Brain	Human::getBrain(){
	return *(this->_brain);
};

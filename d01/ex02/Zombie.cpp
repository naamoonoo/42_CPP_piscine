/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:06 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:33:34 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << "< " << this->_name << " ( " << this->_type << " ) > ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setType(std::string type){
	this->_type = type;
};

std::string	Zombie::getName(){
	return this->_name;
};

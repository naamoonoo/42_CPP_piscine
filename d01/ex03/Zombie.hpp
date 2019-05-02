/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:19 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:46:39 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(std::string name): _name(name) {
			std::cout << name << " zomibe is born" << std::endl;
		};
		~Zombie() {
			std::cout << this->_name << " zombie dead" <<std::endl;
		};
		Zombie() {};

		void	announce();
		void	setType(std::string type);
		std::string	getName();
};
#endif

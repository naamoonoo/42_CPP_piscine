/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:08 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:59:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(std::string name): name(name) {
			std::cout << name << " zomibe is born" << std::endl;
		};
		~Zombie() {
			std::cout << this->name << " zombie dead" <<std::endl;
		};
		std::string	name;
		std::string	type;
		void	announce();
};

#endif

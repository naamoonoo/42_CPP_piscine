/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:58:12 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:31:30 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent() {};
		~ZombieEvent() {};
		void	setZombieType(Zombie *zombie, std::string type);
		Zombie*	newZombie(std::string name, std::string type);
		Zombie	randomChump();
};

#endif

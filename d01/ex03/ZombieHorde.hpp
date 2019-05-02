/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:59:04 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:44:34 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class ZombieHorde{
	private:
		Zombie	*_zombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		Zombie*	getZombie(int idx);
		void	setZombieType(int idx, std::string type);
		Zombie*	randomChump();


};

#endif

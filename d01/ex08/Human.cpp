/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:19:44 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:58:39 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

typedef	struct	s_dispatch_table
{
	std::string	action;
	void		(Human::*func)(std::string const &);
}				t_dp;

t_dp	Human::_dp[] =
{
	{"melee", &Human::meleeAttack},
	{"ranged", &Human::rangedAttack},
	{"shout", &Human::intimidatingShout}
};

void Human::meleeAttack(std::string const & target){
	std::cout << "meleeAttack to " << target << std::endl;
};

void Human::rangedAttack(std::string const & target){
	std::cout << "rangedAttack to " << target << std::endl;
};

void Human::intimidatingShout(std::string const & target){
	std::cout << "intimidatingShout to " << target << std::endl;
};

void Human::action(std::string const & action_name, std::string const & target){
	int i;

	i = -1;
	while (++i < 3)
		if (this->_dp[i].action.compare(action_name) == 0)
			return (this->*_dp[i].func)(target);
	if (i == 3)
		std::cout << "there are only three type of attack (melee, ranged, shout)" << std::endl;
};


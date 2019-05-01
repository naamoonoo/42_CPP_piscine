/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:19:48 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 01:43:22 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>

typedef	struct	s_dispatch_table t_dp;

class Human
{
	private:
		static	t_dp _dp[];
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);

	public:
		Human() {};
		~Human() {};
		void action(std::string const & action_name, std::string const & target);
};


# endif

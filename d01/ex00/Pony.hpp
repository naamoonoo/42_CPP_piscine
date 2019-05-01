/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:54:26 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:54:51 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(std::string name, std::string color, int age);
		~Pony();
		std::string	name;
		std::string	color;
		id_t		age;
		void		gettingOlder();
};

#endif

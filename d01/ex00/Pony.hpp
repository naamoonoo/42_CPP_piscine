/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:54:26 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:24:21 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony
{
	private:
		std::string _name;
		int			_age;

	public:
		Pony(std::string name, int age);
		~Pony();
		void		gettingOlder();
};

#endif

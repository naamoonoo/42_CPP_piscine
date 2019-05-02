/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 23:00:11 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:50:17 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human{
	private:
		Brain	*_brain;
	public:
		Human();
		~Human();

		std::string	identify();
		Brain	getBrain();
};

#endif

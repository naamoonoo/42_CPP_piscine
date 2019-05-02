/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:59:48 by hnam              #+#    #+#             */
/*   Updated: 2019/05/01 21:51:30 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <sstream>
#include <string>

class Brain {
	private:
		int		_size;

	public:
		Brain(int size): _size(size) {
			std::cout << "created brain(" << this->_size << ")" << std::endl;
		};
		~Brain() {
			std::cout << "brain deleted" << std::endl;
		};
		std::string	identify();

};

#endif

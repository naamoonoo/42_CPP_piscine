/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:15 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 21:48:05 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact(int index, std::string info[])
{
	int i;

	i = -1;
	while (++i < 11)
		this->contact_info[i] = info[i];
	this->index = index;
	// this->next = NULL;
	return ;
};

Contact::~Contact(void){
	return ;
};

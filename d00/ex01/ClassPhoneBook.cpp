/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:18 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 21:51:15 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// this->head = NULL;
	this->contacts = new Contact[8];
	this->index = 0;
	return ;
};

PhoneBook::~PhoneBook(void)
{
	return ;
};

void	PhoneBook::add_contact(std::string info[])
{
	Contact *contact = new Contact(this->index, info);
	this->contacts[this->index] = *contact;
	this->index += 1;
	// contact->next = this->head;
	// this->head = contact;
};

void	PhoneBook::show_contact(int index)
{
	int i;

	// while(this->head->index != index)
	// 	this->head = this->head->next;
	i = -1;
	while (++i < 11)
		std::cout << g_question[i] << " : " << contacts[index].contact_info[i] << std::endl;
}

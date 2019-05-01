/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:19 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 21:47:47 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONE_BOOK_H
# define CLASS_PHONE_BOOK_H

#include <iostream>
#include "ClassContact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	*contacts;
		int		index;
		void	add_contact(std::string info[]);
		void	show_contact(int index);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:17 by hnam              #+#    #+#             */
/*   Updated: 2019/04/30 22:12:06 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

#include <iostream>

static 	std::string g_question[] =
{
	"first_name",
	"last_name",
	"nickname",
	"login",
	"postal_address",
	"email_address",
	"phone_number",
	"birthday_date",
	"favorite_meal",
	"underwear_color",
	"darkest_secret"
};

class Contact
{
	public:
		Contact(int index, std::string info[]);
		~Contact(void);
		int	index;
		std::string	contact_info[11];
		Contact() {};
};

#endif

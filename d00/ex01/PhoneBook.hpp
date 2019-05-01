/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <hnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:49:23 by hnam              #+#    #+#             */
/*   Updated: 2019/04/29 22:49:24 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <iomanip>
#include "ClassContact.hpp"
#include "ClassPhoneBook.hpp"

int		is_same(std::string a, std::string b);
void	format_printing(std::string str);
void	add_contact_info(PhoneBook *pb);
void	search_contact_info(PhoneBook *pb);
int		dispatch_table(std::string mode, PhoneBook *pb);

#endif

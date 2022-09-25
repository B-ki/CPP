/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:19:03 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/26 00:44:20 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void ) {
	std::cout << "PhoneBook constructed" << std::endl;
	this->_size = 0;
}

PhoneBook::~PhoneBook ( void ) {
	std::cout << "PhoneBook destructed" << std::endl;
}

void PhoneBook::addContact ( void ) {
	if (this->_size < 9)
		this->_size++;
	if (this->_size == 9)
	{
		for (int i = 0; i <= 6; i++	)
		{
			this->_list[i].setFirstName(this->_list[i + 1].getFirstName());
			this->_list[i].setLastName(this->_list[i + 1].getLastName());
			this->_list[i].setNickName(this->_list[i + 1].getNickName());
			this->_list[i].setPhoneNumber(this->_list[i + 1].getPhoneNumber());
			this->_list[i].setDarkestSecret(this->_list[i + 1].getDarkestSecret());
		}
	}
	if (this->_size < 9)
		this->_list[this->_size - 1].fillContact();
	else
		this->_list[7].fillContact();
}

void PhoneBook::print ( void ) const {
	int	i;
	int	sz;

	i = 0;
	if (this->_size == 9)
		sz = 8;
	else
		sz = this->_size;
	while (i < sz)
		this->_list[i++].printAll();
}

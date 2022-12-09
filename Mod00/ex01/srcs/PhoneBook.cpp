/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:19:03 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/21 10:57:55 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <ios>

PhoneBook::PhoneBook ( void ) {
	this->_size = 0;
}

PhoneBook::~PhoneBook ( void ) {
}

void PhoneBook::addContact ( void ) {
	if (this->_size == 8)
	{
		for (int i = 0; i <= 6; i++	)
		{
			this->_list[i].setFirstName(this->_list[i + 1].getFirstName());
			this->_list[i].setLastName(this->_list[i + 1].getLastName());
			this->_list[i].setNickName(this->_list[i + 1].getNickName());
			this->_list[i].setPhoneNumber(this->_list[i + 1].getPhoneNumber());
			this->_list[i].setDarkestSecret(this->_list[i + 1].getDarkestSecret());
		}
		this->_list[this->_size - 1].fillContact();
	}
	if (this->_size < 8)
	{
		this->_size++;
		this->_list[this->_size - 1].fillContact();
	}
}

void PhoneBook::print ( void ) const
{
	int	i;
	int	sz;

	i = 0;
	if (this->_size == 9)
		sz = 8;
	else
		sz = this->_size;
	if (this->_size)
	{
		std::cout << std::setw(45) << std::setfill('-') << '-' << std::endl;
		std::cout << std::setw(0) << std::setfill(' ');
		std::cout << "-First Name- Last Name- Nick Name- Phone Nb -" <<  std::endl;
		while (i < sz)
		{
			std::cout << std::setw(45) << std::setfill('-') << '-' << std::endl;
			std::cout << std::setw(0) << std::setfill(' ');
			std::cout << "-";
			this->_list[i++].printAll();
			std::cout << "-" << std::endl;
		}
		std::cout << std::setw(45) << std::setfill('-') << '-' << std::endl;
		std::cout << std::setw(0) << std::setfill(' ');
	}
}

void PhoneBook::contactPrint ( int i ) const
{
	if (this->_size)
	{
		std::cout << "First Name : " << this->_list[i - 1].getFirstName() << std::endl;
		std::cout << "Last Name : " << this->_list[i - 1].getLastName() << std::endl;
		std::cout << "Nick Name : " << this->_list[i - 1].getNickName() << std::endl;
		std::cout << "Phone Number : " << this->_list[i - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << this->_list[i - 1].getDarkestSecret() << std::endl;
	}
}

int	PhoneBook::getSize() const
{
	return (this->_size);
}

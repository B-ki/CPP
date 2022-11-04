/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:39:42 by rmorel            #+#    #+#             */
/*   Updated: 2022/10/10 17:15:51 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact ( void )
{
}

Contact::~Contact(void)
{
}

void	Contact::fillContact(void)
{
	std::string buf;
	while (buf.empty() && std::cin)
	{
		std::cout << "Enter first name : ";
		std::getline (std::cin, buf);
	}
	this->_FirstName = buf;
	buf.clear();
	while (buf.empty() && std::cin)
	{
		std::cout << "Enter last name : ";
		std::getline (std::cin,buf);
	}
	this->_LastName = buf;
	buf.clear();
	while (buf.empty() && std::cin)
	{
		std::cout << "Enter nick name : ";
		std::getline (std::cin,buf);
	}
	this->_NickName = buf;
	buf.clear();
	while (buf.empty() && std::cin)
	{
		std::cout << "Enter phone number : ";
		std::getline (std::cin,buf);
	}
	this->_PhoneNumber = buf;
	buf.clear();
	while (buf.empty() && std::cin)
	{
		std::cout << "Enter darkest secret : ";
		std::getline (std::cin,buf);
	}
	this->_DarkestSecret = buf;
	buf.clear();
}

void	Contact::truncPrint(std::string s) const
{
	if (s.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << s;
	}
	else
	{
		std::cout << std::setw(9);
		std::cout << s.substr(0, 9) << ".";
	}
}
void	Contact::printAll(void) const
{
	truncPrint(this->_FirstName);
	std::cout << "|";
	truncPrint(this->_LastName);
	std::cout << "|";
	truncPrint(this->_NickName);
	std::cout << "|";
	truncPrint(this->_PhoneNumber);
	std::cout << "|";
	truncPrint(this->_DarkestSecret);
}

void	Contact::setFirstName( std::string F ) {
	if (F.size())
		this->_FirstName = F;
	return ;
}

void	Contact::setLastName( std::string L ) {
	if (L.size())
		this->_LastName = L;
	return ;
}

void	Contact::setNickName( std::string N ) {
	if (N.size())
		this->_NickName = N;
	return ;
}

void	Contact::setPhoneNumber( std::string P ) {
	if (P.size())
		this->_PhoneNumber = P;
	return ;
}

void	Contact::setDarkestSecret( std::string D ) {
	if (D.size())
		this->_DarkestSecret = D;
	return ;
}

std::string	Contact::getFirstName( void ) const {
	return this->_FirstName ;
}

std::string	Contact::getLastName( void ) const {
	return this->_LastName ;
}

std::string	Contact::getNickName( void ) const {
	return this->_NickName ;
}

std::string	Contact::getPhoneNumber( void ) const {
	return this->_PhoneNumber ;
}

std::string	Contact::getDarkestSecret( void ) const {
	return this->_DarkestSecret ;
}

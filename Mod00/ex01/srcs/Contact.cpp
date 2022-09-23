/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:39:42 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/22 17:00:49 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact( std::string F, std::string L, std::string N, std::string P,
				str::string D ) : _FirstName(F), _LastName(L), _NickName(N),
				_PhoneNumber(P), _DarkestSecret(D) {

}

Contact::~Contact(void)
{
	std::cout << "Contact destructed" << std::endl;
}

void Contact::fill_contact(void)
{
	std::cout << "Enter first name : ";
	std::cin >> this->_FirstName;
	std::cout << "Enter last name : ";
	std::cin >> this->_LastName;
	std::cout << "Enter nick name : ";
	std::cin >> this->_NickName;
	std::cout << "Enter phone number : ";
	std::cin >> this->_PhoneNumber;
	std::cout << "Enter darkest secret : ";
	std::cin >> this->_DarkestSecret;
}

void	Contact::setFirstName( std::string F ) {
	if (F != NULL)
		this->_FirstName = F;
	return ;
}

void	Contact::setLastName( std::string L ) {
	if (L != NULL)
		this->_LastName = L;
	return ;
}

void	Contact::setNickName( std::string N ) {
	if (N != NULL)
		this->_NickName = N;
	return ;
}

void	Contact::setPhoneNumber( std::string P ) {
	if (P != NULL)
		this->_PhoneNumber = P;
	return ;
}

void	Contact::setDarkestSecret( std::string D ) {
	if (D != NULL)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/26 00:40:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP 

#include <string>
#include <iostream>
#include <iomanip>

class	Contact
{
	public:
	
//		Constructor & Destructor
		Contact( void );
		~Contact(void);	

//		Accessor

		void	setFirstName( std::string F );
		void	setLastName( std::string F );
		void	setNickName( std::string F );
		void	setPhoneNumber( std::string F );
		void	setDarkestSecret( std::string F );

		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getNickName( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;

//		Functions

		void	fillContact(void);

		void	printAll(void) const
		{
			std::cout << std::setw(10);
			std::cout << this->_FirstName;
			std::cout << "|" ;
			std::cout << std::setw(10);
			std::cout << this->_LastName;
			std::cout << "|" ;
			std::cout << std::setw(10);
			std::cout << this->_NickName;
			std::cout << "|" ;
			std::cout << std::setw(10);
			std::cout << this->_PhoneNumber;
			std::cout << "|" ;
			std::cout << std::setw(10);
			std::cout << this->_DarkestSecret;
			std::cout << std::endl;
		}
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
		
};

#endif

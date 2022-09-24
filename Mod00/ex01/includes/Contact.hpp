/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/24 19:19:22 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP 

#include <string>
#include <iostream>

class	Contact
{
	public:
	
//		Constructor & Destructor
		Contact( std::string F, std::string L, std::string N, std::string P,
				std::string D );
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

		void	fill_contact(void);

		void	print_all(void)
		{
			std::cout << this->_FirstName << "|" << this->_LastName << "|";
			std::cout << this->_NickName << "|" << this->_PhoneNumber << "|";
			std::cout << this->_DarkestSecret << std::endl;
		}
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
		
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/26 09:17:25 by rmorel           ###   ########.fr       */
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

		void	printAll(void) const;

		void	truncPrint(std::string s) const;

	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
		
};

#endif

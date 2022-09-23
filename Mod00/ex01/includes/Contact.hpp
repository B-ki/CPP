/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/23 15:27:32 by rmorel           ###   ########.fr       */
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
				str::string D );
		~Contact(void);

//		Accessor

		void	setFirstName( std::string F );
		void	setLastName( std::string F );
		void	setNickName( std::string F );
		void	setPhoneNumber( std::string F );
		void	setDarkestSecret( std::string F );

		std::string	Contact::getFirstName( void ) const;
		std::string	Contact::getLastName(tName( void ) const;
		std::string	Contact::getNickName( void ) const;
		std::string	Contact::getPhoneNumber( void ) const;
		std::string	Contact::getDarkestSecret( void ) const;

		void	print(char *s)
		{
			int	i;

			i = 0;
			if (sizeof(s) >= 10)
			{
				while (i <= 8)
				{
					std::cout << s[i];
					i++;
				}
				std::cout << ".";
			}
			else
			{
				while (s[i])
					std::cout << s[i++];
				while (i == 9)
				{
					std::cout << " ";
					i++;
				}
			}
		}

		void	fill_contact(void);

		void	print_all(void)
		{
			print(getFirstName);
			std::cout << "|";
			print(getLastName);	
			std::cout << "|";
			print(getNickName);
			std::cout << "|";
			print(getPhoneNumber);
			std::cout << "|";
			print(getDarkestSecret);
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

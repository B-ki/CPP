/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/22 17:00:49 by rmorel           ###   ########.fr       */
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
			print(_FirstName);
			std::cout << "|";
			print(_LastName);	
			std::cout << "|";
			print(_NickName);
			std::cout << "|";
			print(_PhoneNumber);
			std::cout << "|";
			print(_DarkestSecret);
			std::cout << std::endl;
		}
	private:
		std::string	_FirstName;
		std::stchar	_LastName;
		std::stchar	_NickName;
		std::stchar	_PhoneNumber;
		std::stchar	_DarkestSecret;
		
};

#endif

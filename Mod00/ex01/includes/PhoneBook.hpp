/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:15:59 by rmorel            #+#    #+#             */
/*   Updated: 2022/10/10 17:24:00 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 

#include <string>
#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	public:
	
//		Constructor & Destructor
		PhoneBook( void );
		~PhoneBook(void);

//		Functions

		void	addContact( void );
		void	print() const;
		Contact getContact( int i ) const;

	private:
		Contact	_list[8];
		int		_size;
		
};

#endif

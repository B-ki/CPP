/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:08:26 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/22 13:14:00 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:

	PhoneBook( void );
	~PhoneBook( void );

	void	add(Contact C)
	{
		if (size == 7)
		{
			for (int i = 0; i < 7; i++)
			{
				Directory[i] = Directory[i + 1];
			}
			Directory[7] = C;
		}
		else
		{
			Directory[size] = C;
			size++;
		}
	}

	private:

		Contact	Directory[8];
		int		size;
};	

#endif

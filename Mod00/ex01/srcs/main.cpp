/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:34:58 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/25 18:46:14 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <exception>

int	main(void)
{
	std::string		cmd;
	PhoneBook		list;

	while(1)
	{
		std::cout << "Enter a command : ";
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			list.addContact();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			list.print();
		}
		else if (cmd.compare("EXIT") == 0)
		{
			return(0);
		}
		else
			std::cout << "Commands are ADD, SEARCH and EXIT." << std::endl;
	}
	return (0);
}

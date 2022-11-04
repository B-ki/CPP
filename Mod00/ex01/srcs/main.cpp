/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:34:58 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/28 15:17:34 by rmorel           ###   ########.fr       */
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

	std::cout << "Commands are ADD, SEARCH and EXIT." << std::endl;
	do
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			list.addContact();
		else if (cmd.compare("SEARCH") == 0)
			list.print();
		else if (cmd.compare("EXIT") == 0)
			return(0);
		cmd.clear();
	} while (cmd.empty() && std::cin);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:34:58 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/21 10:47:48 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <exception>

int	main(void)
{
	std::string		cmd;
	int		num;
	PhoneBook		list;

	std::cout << "Commands are ADD, SEARCH and EXIT." << std::endl;
	do
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			list.addContact();
		else if (cmd.compare("SEARCH") == 0)
		{
			list.print();
			cmd.clear();
			num = 0;
			try
			{
				std::cout << "Which user do you want? ";
				std::getline(std::cin, cmd);
				num = std::atoi(cmd.c_str());
				if (num <= 0 || num > list.getSize()) throw 1;
			}
			catch (...)
			{
				std::cout << "This should be a whole number between 1 and " << list.getSize() << std::endl;
			}
			if (num >= 1 && num <= list.getSize())
				list.contactPrint(num);
		}
		else if (cmd.compare("EXIT") == 0)
			return(0);
		cmd.clear();
	} while (cmd.empty() && std::cin);
	return (0);
}

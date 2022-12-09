/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:39 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 15:15:48 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl <<  "Debug sentence" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl << "Info sentence" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl << "Warning sentence" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl <<  "Error sentence" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (; i < 4; i++)
	{
		if (level == arr[i])
			break;
	}
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "Probably complaining about some bullshit" << std::endl;
	}
}

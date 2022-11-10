/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:01:39 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/11 00:01:39 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Debug sentence" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info sentence" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning sentence" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error sentence" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	arr[4] = {"debug", "info", "warning", "error"};
	funcPtr arrFuncPtr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(arr[i]) == 0)
		{
			(this->*arrFuncPtr[i])();
		}
	}
}

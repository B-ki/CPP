/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:13:16 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/11 00:25:23 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;

	if (ac != 2 || !av[1])
	{
		std::cout << "Need 1 argument" << std::endl;
		return 1;
	}
	std::string	str(av[1]);
	int			index = 0;
	std::string	arr[4] = {"debug", "info", "warning", "error"};
	for(int i = 0; i < 4; i++)
	{
		if (arr[i].compare(str) == 0)
			index = i + 1;
	}
	switch(index)
	{
		case 1:
			Harl.complain("debug");
		case 2:
			Harl.complain("info");
		case 3:
			Harl.complain("warning");
		case 4:
			Harl.complain("error");
			break;
		default:
			std::cout << "Probably complaining about some bullshit" << std::endl;
	}
	return (0);
}

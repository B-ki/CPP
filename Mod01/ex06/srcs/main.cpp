/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:13:16 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 15:09:14 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;

	if (ac != 2 || !av[1][0])
	{
		std::cout << "Need 1 argument" << std::endl;
		return 1;
	}
	Harl.complain(av[1]);
	return (0);
}

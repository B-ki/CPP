/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:53:08 by rmorel            #+#    #+#             */
/*   Updated: 2022/09/18 11:06:00 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				if (av[i][j] >= 'a' && av[i][j]<= 'z')
					std::cout << (char)(av[i][j] - 32);
				else
					std::cout << av[i][j];
			}
			if (i != (ac - 1))
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

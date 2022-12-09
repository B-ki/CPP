/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:24:10 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 14:45:17 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde = zombieHorde(3, "John Doe");
	for(int i = 0; i < 3; i++)
		horde[i].announce();
	delete [] horde;
	Zombie*	horde2 = zombieHorde(-2, "John Doe");
	for(int i = 0; i < -2; i++)
		horde2[i].announce();
	return (0);
}

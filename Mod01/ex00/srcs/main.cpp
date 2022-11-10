/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:24:10 by rmorel            #+#    #+#             */
/*   Updated: 2022/10/28 19:44:46 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	pointerZombie = newZombie("Bob");

	randomChump("Jack");
	pointerZombie->announce();
	delete pointerZombie;
	return (0);
}

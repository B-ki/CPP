/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:43:29 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 14:40:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 0)
		return NULL;
	Zombie*	horde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}

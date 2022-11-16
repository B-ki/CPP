/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 20:19:54 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	std::string Larry = "Larry";

	Bob.setAD(2);
	Bob.takeDmg(3);
	Bob.attack(Larry);
	Bob.beRepaired(4);
	Bob.takeDmg(3);
	Bob.takeDmg(3);
	Bob.takeDmg(3);
	Bob.attack(Larry);
	Bob.beRepaired(5);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.attack(Larry);
	Bob.takeDmg(3);
	Bob.beRepaired(5);
	Bob.takeDmg(90);
	Bob.attack(Larry);

	return 0;
}

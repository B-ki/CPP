/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 21:17:47 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap Jack("Jack");
	std::string Jones = "Jones";

	Jack.setAD(2);
	Jack.takeDmg(3);
	Jack.attack(Jones);
	Jack.beRepaired(4);
	Jack.takeDmg(3);
	Jack.takeDmg(3);
	Jack.takeDmg(3);
	Jack.attack(Jones);
	Jack.beRepaired(5);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.attack(Jones);
	Jack.takeDmg(3);
	Jack.beRepaired(5);
	Jack.takeDmg(90);
	Jack.attack(Jones);

	return 0;
}

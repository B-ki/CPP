/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 11:40:26 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << std::endl;

	ScavTrap Jack("Jack");
	std::string Jones = "Jones";

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
	Jack.guardGate();
	Jack.takeDmg(3);
	Jack.beRepaired(5);
	Jack.takeDmg(90);
	Jack.attack(Jones);
	Jack.beRepaired(5);
	Jack.takeDmg(90);

	std::cout << std::endl;

	ScavTrap Remi("Remisterio");	

	std::cout << Remi;
	Remi = Jack;
	std::cout << Remi;

	std::cout << std::endl;

	FragTrap Leo("Leo");
	std::string Gus = "Gus";

	Leo.takeDmg(3);
	Leo.attack(Gus);
	Leo.beRepaired(4);
	Leo.takeDmg(3);
	Leo.takeDmg(3);
	Leo.takeDmg(3);
	Leo.attack(Gus);
	Leo.beRepaired(5);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.attack(Gus);
	Leo.highFiveGuys();
	Leo.takeDmg(3);
	Leo.beRepaired(5);
	Leo.takeDmg(90);
	Leo.attack(Gus);
	Leo.beRepaired(5);
	Leo.takeDmg(90);

	return 0;
}

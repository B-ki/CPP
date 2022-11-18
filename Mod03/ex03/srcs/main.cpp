/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 00:30:11 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap Remi("Remi");
	std::string Louis = "Louis";

	Remi.setAD(2);
	Remi.takeDmg(3);
	Remi.attack(Louis);
	Remi.beRepaired(4);
	Remi.takeDmg(3);
	Remi.takeDmg(3);
	Remi.takeDmg(3);
	Remi.attack(Louis);
	Remi.beRepaired(5);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.attack(Louis);
	Remi.takeDmg(3);
	Remi.beRepaired(5);
	Remi.takeDmg(90);
	Remi.attack(Louis);

	std::cout << std::endl;

	ScavTrap Nico("Nico");
	std::string Bene = "Bene";

	Nico.takeDmg(3);
	Nico.attack(Bene);
	Nico.beRepaired(4);
	Nico.takeDmg(3);
	Nico.takeDmg(3);
	Nico.takeDmg(3);
	Nico.attack(Bene);
	Nico.beRepaired(5);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.attack(Bene);
	Nico.guardGate();
	Nico.takeDmg(3);
	Nico.beRepaired(5);
	Nico.takeDmg(90);
	Nico.attack(Bene);
	Nico.beRepaired(5);
	Nico.takeDmg(90);

	std::cout << std::endl;

	ScavTrap Augustin("Gusinho");	

	std::cout << Augustin;
	Remi = Nico;
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

	std::cout << std::endl;
	std::cout << std::endl;

	DiamondTrap Arthur("Arthur");
	std::string Tea = "Tea";
	std::cout << Arthur;
	Arthur.takeDmg(3);
	Arthur.attack(Tea);
	Arthur.beRepaired(4);
	Arthur.takeDmg(3);
	Arthur.takeDmg(3);
	Arthur.takeDmg(3);
	Arthur.attack(Tea);
	Arthur.beRepaired(5);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.attack(Tea);
	Arthur.highFiveGuys();
	Arthur.guardGate();
	Arthur.takeDmg(3);
	Arthur.beRepaired(5);
	Arthur.takeDmg(90);
	Arthur.attack(Tea);
	Arthur.beRepaired(5);
	Arthur.takeDmg(90);
	std::cout << Arthur;
	Arthur.whoAmI();
	std::cout << std::endl;

	return 0;
}

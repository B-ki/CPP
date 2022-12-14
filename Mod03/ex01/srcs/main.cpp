/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 12:01:15 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Gus("Gus");
	std::string Rems = "Rems";

	Gus.setAD(2);
	Gus.takeDmg(3);
	Gus.attack(Rems);
	Gus.beRepaired(4);
	Gus.takeDmg(3);
	Gus.takeDmg(3);
	Gus.takeDmg(3);
	Gus.attack(Rems);
	Gus.beRepaired(5);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.attack(Rems);
	Gus.takeDmg(3);
	Gus.beRepaired(5);
	Gus.takeDmg(90);
	Gus.attack(Rems);

	std::cout << std::endl;

	ScavTrap Leo("Leo");
	std::cout << Leo;
	std::string Nico = "Nico";

	Leo.takeDmg(3);
	Leo.attack(Nico);
	Leo.beRepaired(4);
	std::cout << Leo;
	Leo.takeDmg(3);
	Leo.takeDmg(3);
	Leo.takeDmg(3);
	Leo.attack(Nico);
	Leo.beRepaired(5);
	Leo.attack(Nico);
	Leo.attack(Nico);
	Leo.attack(Nico);
	Leo.attack(Nico);
	Leo.attack(Nico);
	Leo.attack(Nico);
	Leo.attack(Nico);
	std::cout << Leo;
	Leo.guardGate();
	Leo.takeDmg(3);
	Leo.beRepaired(5);
	Leo.takeDmg(90);
	std::cout << Leo;
	Leo.attack(Nico);
	Leo.beRepaired(5);
	Leo.takeDmg(90);
	Leo.beRepaired(5);
	std::cout << Leo;

	std::cout << std::endl;

	ScavTrap Arthur("Arthuro les biscottos");	

	std::cout << Arthur;
	Arthur = Leo;
	std::cout << Arthur;

	std::cout << std::endl;

	return 0;
}

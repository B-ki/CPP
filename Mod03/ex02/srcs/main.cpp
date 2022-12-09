/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 12:00:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap Rems("Rems");
	std::string Gus = "Gus";

	Rems.setAD(2);
	Rems.takeDmg(3);
	Rems.attack(Gus);
	Rems.beRepaired(4);
	Rems.takeDmg(3);
	Rems.takeDmg(3);
	Rems.takeDmg(3);
	Rems.attack(Gus);
	Rems.beRepaired(5);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.attack(Gus);
	Rems.takeDmg(3);
	Rems.beRepaired(5);
	Rems.takeDmg(90);
	Rems.attack(Gus);

	std::cout << std::endl;

	ScavTrap FtSplitMan("FtSplitMan");
	std::string Bene = "Bene";

	FtSplitMan.takeDmg(3);
	FtSplitMan.attack(Bene);
	std::cout << FtSplitMan;
	FtSplitMan.beRepaired(4);
	FtSplitMan.takeDmg(3);
	FtSplitMan.takeDmg(3);
	FtSplitMan.takeDmg(3);
	FtSplitMan.attack(Bene);
	FtSplitMan.beRepaired(5);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.attack(Bene);
	FtSplitMan.guardGate();
	FtSplitMan.takeDmg(3);
	FtSplitMan.beRepaired(5);
	FtSplitMan.takeDmg(90);
	FtSplitMan.attack(Bene);
	std::cout << FtSplitMan;
	FtSplitMan.beRepaired(5);
	FtSplitMan.takeDmg(90);
	std::cout << FtSplitMan;
	FtSplitMan.attack(Bene);

	std::cout << std::endl;

	ScavTrap Remi("Remisterio");	

	std::cout << Remi;
	Remi = FtSplitMan;
	std::cout << Remi;

	std::cout << std::endl;

	FragTrap Leo("Leo");
	std::string Nico = "Nico";
	std::cout << Leo;

	Leo.takeDmg(3);
	Leo.attack(Nico);
	Leo.beRepaired(4);
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
	Leo.highFiveGuys();
	Leo.takeDmg(3);
	Leo.beRepaired(5);
	Leo.takeDmg(90);
	Leo.attack(Nico);
	std::cout << Leo;
	Leo.beRepaired(5);
	Leo.takeDmg(90);
	Leo.attack(Nico);
	std::cout << Leo;
	std::cout << std::endl;

	return 0;
}

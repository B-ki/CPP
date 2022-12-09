/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 11:00:13 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Remi("Remi");
	std::string Gus = "Gus";
	std::string Empty = "";

	Remi.setAD(2);
	Remi.takeDmg(3);
	Remi.setAD(-2);
	Remi.takeDmg(-3);
	Remi.attack(Gus);
	Remi.attack(Empty);
	Remi.beRepaired(4);
	Remi.takeDmg(3);
	Remi.takeDmg(3);
	Remi.takeDmg(3);
	Remi.attack(Gus);
	Remi.beRepaired(5);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.attack(Gus);
	Remi.takeDmg(3);
	Remi.beRepaired(5);
	Remi.takeDmg(90);
	Remi.attack(Gus);

	return 0;
}

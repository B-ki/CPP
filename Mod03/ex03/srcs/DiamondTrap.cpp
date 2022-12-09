/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 11:55:18 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout <<DIAM<<"DiamondTrap"<<NORMAL<<" default constructor." << std::endl;
	_name = ClapTrap::name;
	HP = FragTrap::HP;
	//FragTrap est le dernier constructeur appele, il a donc override tout les elements HP,MP et AD, on ne peux pas chercher ScavTrap::MP (qui est au passage le meme element que ClapTrap::MP et FragTrap::MP) car il vaut 100 a ce moment present
	MP = 50;
	AD = ScavTrap::AD;
	ClapTrap::name = name + "_clap_name";

	return;
}

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n), ScavTrap(), FragTrap()
{
	std::cout <<DIAM<< "DiamondTrap"<<NORMAL<<" parametric constructor." << std::endl;
	_name = n;
	HP = FragTrap::HP;
	MP = 50;
	AD = FragTrap::AD;
	ClapTrap::name = name + "_clap_name";

	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout <<DIAM<<"DiamondTrap"<<NORMAL<<" copy constructor." << std::endl;
	*this = src;
	_name = ClapTrap::name;
	HP = FragTrap::HP;
	MP = 50;
	AD = FragTrap::AD;
	ClapTrap::name = name + "_clap_name";

	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<DIAM<<"DiamondTrap"<<NORMAL<<" destructor." << std::endl;

	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout <<DIAM<<"DiamondTrap"<<NORMAL<<" copy assignement operator called"<< std::endl;
	ClapTrap::operator=(rhs);

	return *this;
}

std::string DiamondTrap::getName(void) const
{
	return _name;
}

std::ostream& operator<<(std::ostream & o, DiamondTrap const & i)
{
	if (i.getHP() < 0)
		o <<DIAM<< i.getName() <<NORMAL<< " is dead." << std::endl;
	else
		o <<DIAM<< i.getName() <<NORMAL<< " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "ClapTrap's name is "<<CLAP<< ClapTrap::name <<NORMAL<< " and DiamondTrap's name is " <<DIAM<< _name <<NORMAL<< std::endl;
}

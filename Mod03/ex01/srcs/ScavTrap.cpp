/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 11:31:14 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " default constructor." << std::endl;
	this->HP = 100;
	this->MP = 50;
	this->AD= 20;

	return;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " parametric constructor." << std::endl;
	this->HP = 100;
	this->MP = 50;
	this->AD= 20;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " destructor." << std::endl;

	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " copy constructor." << std::endl;

	return;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator =(rhs);
	return *this;
}

void ScavTrap::attack(std::string &target)
{
	if (HP <= 0)
		return;
	if (MP <= 0)
	{
		std::cout << "Oh, no ! " <<SCAV<<name<<NORMAL<< " has no more MP to attack !" << std::endl;
		return ;
	}
	std::cout <<SCAV<<name<<YELLOW<<" attacks "<<NORMAL<< target << ", causing " << AD << " points of dmg !" << std::endl;
	MP--;
}

void ScavTrap::guardGate(void) const
{
	std::cout <<SCAV<<name<<NORMAL<< " is now in Gate keeper mode !" << std::endl;
}

std::ostream& operator<<(std::ostream & o, ScavTrap const & i)
{
	if (i.getHP() < 0)
		o <<SCAV<< i.getName() <<NORMAL<< " is dead." << std::endl;
	else
		o <<SCAV<< i.getName() <<NORMAL<< " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}


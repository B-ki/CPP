/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 21:16:18 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _name("Random Name"),_HP(10),_MP(10),_AD(0)
{
	std::cout << "ScavTrap default constructor." << std::endl;

	return;
}

ScavTrap::ScavTrap(std::string n) : _name(n),_HP(10),_MP(10),_AD(0)
{
	std::cout << "ScavTrap parametric constructor." << std::endl;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor." << std::endl;

	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap copy constructor." << std::endl;
	*this = src;

	return;
}

void ScavTrap::attack(std::string &target)
{
	if (_HP <= 0)
		return;
	if (_MP <= 0)
	{
		std::cout << "Oh, no ! ScavTrap " <<SCAV<<_name<<NORMAL<< " has no more MP to attack !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " <<SCAV<<_name<<YELLOW<<" attacks "<<NORMAL<< target << ", causing " << _AD << " points of dmg !" << std::endl;
	_MP--;
}

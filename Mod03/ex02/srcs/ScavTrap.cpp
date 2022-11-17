/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 11:33:58 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " default constructor." << std::endl;
	this->_HP = 100;
	this->_MP = 50;
	this->_AD= 20;

	return;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout <<SCAV<<"ScavTrap"<<NORMAL<< " parametric constructor." << std::endl;
	this->_HP = 100;
	this->_MP = 50;
	this->_AD= 20;

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

void ScavTrap::setAD(unsigned int dmg)
{
	std::cout <<SCAV<<_name<<NORMAL<< "'s dmg is set to " << dmg << "." << std::endl;
	_AD = dmg;
	return ;
}

void ScavTrap::attack(std::string &target)
{
	if (_HP <= 0)
		return;
	if (_MP <= 0)
	{
		std::cout << "Oh, no ! " <<SCAV<<_name<<NORMAL<< " has no more MP to attack !" << std::endl;
		return ;
	}
	std::cout <<SCAV<<_name<<YELLOW<<" attacks "<<NORMAL<< target << ", causing " << _AD << " points of dmg !" << std::endl;
	_MP--;
}

void ScavTrap::guardGate(void) const
{
	std::cout <<SCAV<<_name<<NORMAL<< " is now in Gate keeper mode !" << std::endl;
}

std::ostream& operator<<(std::ostream & o, ScavTrap const & i)
{
	o << i.getName() << " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}


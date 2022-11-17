/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 10:57:01 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Random Name"),_HP(10),_MP(10),_AD(0)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " default constructor." << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string n) : _name(n),_HP(10),_MP(10),_AD(0)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " parametric constructor." << std::endl;

	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " destructor." << std::endl;

	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " copy constructor." << std::endl;
	*this = src;

	return;
}

std::string	ClapTrap::getName(void) const
{
	return _name;
}

int	ClapTrap::getHP(void) const
{
	return _HP;
}

int	ClapTrap::getMP(void) const
{
	return _MP;
}

int	ClapTrap::getAD(void) const
{
	return _AD;
}

void ClapTrap::setAD(unsigned int dmg)
{
	std::cout <<CLAP<<_name<<NORMAL<< "'s dmg is set to " << dmg << "." << std::endl;
	_AD = dmg;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " copy assignement operator called"<< std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_HP = rhs.getHP();
		this->_MP = rhs.getMP();
		this->_AD = rhs.getAD();
	}

	return *this;
}

void ClapTrap::attack(std::string &target)
{
	if (_HP <= 0)
		return;
	if (_MP <= 0)
	{
		std::cout << "Oh, no ! " <<CLAP<<_name<<NORMAL<< " has no more MP to attack !" << std::endl;
		return ;
	}
	std::cout <<CLAP<<_name<<YELLOW<<" attacks "<<NORMAL<< target << ", causing " << _AD << " points of dmg !" << std::endl;
	_MP--;
}

void ClapTrap::takeDmg(unsigned int amount)
{
	if (_HP <= 0)
		return;
	std::cout <<CLAP<<_name<<RED<< " take " << amount << " dmg."<<NORMAL<< std::endl;
	_HP -= amount;
	if (_HP < 3 && _HP > 0)
		std::cout << "Pfioouu that was close !" << std::endl;
	else if (_HP <= 0)
		std::cout <<CLAP<<_name<<NORMAL<< " is dead... Well, that was a fun game." << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP <= 0)
		return;
	if (_MP <= 0)
	{
		std::cout << "Fuck it, " <<CLAP<<_name<<NORMAL<< " has no more MP to repair itself !" << std::endl;
		return ;
	}
	std::cout <<CLAP<<_name<<GREEN<<" is repaired of "<<NORMAL<< amount << " HP." << std::endl;
	if (_HP < 3)
		std::cout << "Wow it feels so much better now !" << std::endl;
	_MP--;
	_HP += amount;
	if (_HP >= 10)
	{
		std::cout <<CLAP<<_name<<NORMAL<< " is fully restored !" << std::endl;
		_HP = 10;
	}
	return;
}

std::ostream& operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getName() << " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}


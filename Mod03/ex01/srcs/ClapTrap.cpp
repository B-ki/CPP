/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 00:58:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Random Name"),HP(10),MP(10),AD(0)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " default constructor." << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string n) : name(n),HP(10),MP(10),AD(0)
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
	return name;
}

int	ClapTrap::getHP(void) const
{
	return HP;
}

int	ClapTrap::getMP(void) const
{
	return MP;
}

int	ClapTrap::getAD(void) const
{
	return AD;
}

void ClapTrap::setAD(unsigned int dmg)
{
	std::cout <<CLAP<<name<<NORMAL<< "'s dmg is set to " << dmg << "." << std::endl;
	AD = dmg;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout <<CLAP<<"ClapTrap"<<NORMAL<< " copy assignement operator called"<< std::endl;

	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->HP = rhs.getHP();
		this->MP = rhs.getMP();
		this->AD = rhs.getAD();
	}

	return *this;
}

void ClapTrap::attack(std::string &target)
{
	if (HP <= 0)
		return;
	if (MP <= 0)
	{
		std::cout << "Oh, no ! " <<CLAP<<name<<NORMAL<< " has no more MP to attack !" << std::endl;
		return ;
	}
	std::cout <<CLAP<<name<<YELLOW<<" attacks "<<NORMAL<< target << ", causing " << AD << " points of dmg !" << std::endl;
	MP--;
}

void ClapTrap::takeDmg(unsigned int amount)
{
	if (HP <= 0)
		return;
	std::cout <<CLAP<<name<<RED<< " take " << amount << " dmg."<<NORMAL<< std::endl;
	HP -= amount;
	if (HP < 3 && HP > 0)
		std::cout << "Pfioouu that was close !" << std::endl;
	else if (HP <= 0)
		std::cout <<CLAP<<name<<NORMAL<< " is dead... Well, that was a fun game." << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HP <= 0)
		return;
	if (MP <= 0)
	{
		std::cout << "Fuck it, " <<CLAP<<name<<NORMAL<< " has no more MP to repair itself !" << std::endl;
		return ;
	}
	std::cout <<CLAP<<name<<GREEN<<" is repaired of "<<NORMAL<< amount << " HP." << std::endl;
	if (HP < 3)
		std::cout << "Wow it feels so much better now !" << std::endl;
	MP--;
	HP += amount;
	if (HP >= 10)
	{
		std::cout <<CLAP<<name<<NORMAL<< " is fully restored !" << std::endl;
		HP = 10;
	}
	return;
}

std::ostream& operator<<(std::ostream & o, ClapTrap const & i)
{
	o <<CLAP<< i.getName() <<NORMAL<< " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}


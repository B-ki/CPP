/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 11:42:49 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout <<FRAG<<"FragTrap"<<NORMAL<< " default constructor." << std::endl;
	this->_HP = 100;
	this->_MP = 100;
	this->_AD= 30;


	return;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout <<FRAG<<"FragTrap"<<NORMAL<< " parametric constructor." << std::endl;
	this->_HP = 100;
	this->_MP = 100;
	this->_AD= 30;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout <<FRAG<<"FragTrap"<<NORMAL<< " destructor." << std::endl;

	return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout <<FRAG<<"FragTrap"<<NORMAL<< " copy constructor." << std::endl;
	*this = src;

	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout <<FRAG<<"FragTrap"<<NORMAL<< " copy assignement operator called"<< std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

std::ostream& operator<<(std::ostream & o, FragTrap const & i)
{
	o << i.getName() << " has " << i.getHP() << " HP, " << i.getMP() << " MP, and " << i.getAD() << " AD." << std::endl;

	return o;
}

void FragTrap::highFiveGuys(void) const
{
	std::cout <<FRAG<< _name <<NORMAL << " start a positive high five request !" << std::endl;
}
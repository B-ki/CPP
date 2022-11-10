/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:16:06 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/09 11:37:24 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n) : _name(n)
{
	std::cout << "Human B constructed" << std::endl;
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << "Human B destructed" << std::endl;
}

void	HumanB::attack(void) const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon, so will probably lose this fight" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}

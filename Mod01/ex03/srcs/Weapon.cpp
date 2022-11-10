/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:07:58 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/09 11:05:15 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	std::cout << "Weapon constructed" << std::endl;
}

Weapon::Weapon(std::string str) : _type(str)
{
	std::cout << "Weapon constructed with " << str << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructed" << std::endl;
}

std::string const & Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string const & str)
{
	this->_type = str;
}

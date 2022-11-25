/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/25 12:17:31 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {type = "ice";}

Ice::~Ice(void) {}

Ice::Ice(Ice const & src) {*this = src;}

std::string const & Ice::getType(void) const {return type;}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Ice const & i)
{
	o << i.getType();

	return o;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone(void) const
{
	AMateria* newIce = new Ice();

	return newIce;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2023/07/14 12:09:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	type = "cure";
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	*this = src;
}

std::string const & Cure::getType(void) const
{
	return type;
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Cure const & i)
{
	o << i.getType();

	return o;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const
{
	AMateria* newCure = new Cure();

	return newCure;
}

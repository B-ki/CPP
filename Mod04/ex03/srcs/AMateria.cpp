/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 11:52:27 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

std::string const & AMateria::getType(void) const
{
	return type;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, AMateria const & i)
{
	o << i.getType();

	return o;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Do nothing because it ain't a materia" << std::endl;
	(void)target;
}

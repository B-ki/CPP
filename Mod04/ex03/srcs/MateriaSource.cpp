/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 20:22:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _size(0) {}

MateriaSource::~MateriaSource(void) {}

MateriaSource::MateriaSource(MateriaSource const & src) {*this = src;}

unsigned int const & MateriaSource::getSize(void) const {return _size;}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		_size = rhs.getSize();
		for(unsigned int i = 0; i < _size; i++)
			slot[i] = rhs.slot[i]->clone();
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, MateriaSource const & i)
{
	o << "MateriaSource has learned " << i.getSize() << " materials";

	return o;
}

void MateriaSource::learnMateria(AMateria*)
{
	//TO DO	: Add a new materia, a copy of the pointed AMateria, to the last slot or do nothing if full
}

void MateriaSource::AMateria* createMateria(std::string const & type)
{
	//TO DO	: Create a materia with the type type
}

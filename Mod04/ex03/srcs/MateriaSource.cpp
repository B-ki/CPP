/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/25 12:56:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _size(0) {}

MateriaSource::~MateriaSource(void)
{
	for (unsigned int i = 0; i < _size; i++)
	{
		if (_slot[i])
			delete _slot[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {*this = src;}

unsigned int const & MateriaSource::getSize(void) const {return _size;}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		_size = rhs.getSize();
		for(unsigned int i = 0; i < _size; i++)
			_slot[i] = rhs._slot[i]->clone();
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, MateriaSource const & i)
{
	o << "MateriaSource has learned " << i.getSize() << " materials";

	return o;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_size == 3)
		return;
	_slot[_size] = m;
	_size++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < _size; i++)
	{
		if (!type.compare(_slot[i]->getType()))
			return (_slot[i]->clone());
	}
	return 0;
}

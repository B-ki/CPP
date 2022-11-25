/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/25 12:47:20 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default"),_size(0) {}

Character::Character(std::string n) : _name(n),_size(0) {}

Character::~Character(void)
{
	for (int i = 0; i < _size; i++)
	{
		if (_slot[i])
			delete _slot[i];
	}
}

Character::Character(Character const & src) {*this = src;}

std::string const & Character::getName(void) const {return _name;}

int const & Character::getSize(void) const {return _size;}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_size = rhs.getSize();
		for(int i = 0; i < _size; i++)
			_slot[i] = rhs._slot[i]->clone();
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, Character const & i)
{
	o << i.getName() << "has " << i.getSize() << " materials";

	return o;
}

void Character::equip(AMateria* m)
{
	if (_size > 3)
		return;
	_slot[_size] = m;
	_size++;
}

void Character::unequip(int idx)
{
	if (idx < _size)
		return;
	int i = idx - 1;
	for (; i < _size; i++)
	{
		_slot[i] = _slot[i+1];
	}
	_slot[i] = NULL;
	_size--;
}

void Character::use(int idx, ICharacter& target)
{
	_slot[idx]->use(target);
}

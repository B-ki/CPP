/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:52:43 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	_name = "Default";
	_size = 0;
	_head = new linkedList;
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::Character(std::string n)
{
	_name = n;
	_size = 0;
	_head = new linkedList;
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < _size; i++)
	{
		if (_slot[i])
			delete _slot[i];
	}
	if (_head)
		delete _head;
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
		{
			if (rhs._slot[i])
				_slot[i] = rhs._slot[i]->clone();
			else
				_slot[i] = NULL;
		}
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
	if (_size > 3 || !m)
	{
		if (_size > 3)
			_head->addNode(m);
		return;
	}
	for(int i = 0; i < 4; i++)
	{
		if (_slot[i] == NULL)
		{
			_slot[i] = m;
			_size++;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _size)
	{
		_head->addNode(_slot[idx]);
		_slot[idx] = NULL;
	}
	_size--;
}

void Character::use(int idx, ICharacter& target)
{
	if (_size && (idx >= 0 && idx <_size))
		_slot[idx]->use(target);
}

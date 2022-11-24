/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 20:22:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _size(0),_name("Default") {}

Character::Character(std::string n) : _size(0),_name(n) {}

Character::~Character(void)
{
	//TO DO : Gerer la suppression des Materia
}

Character::Character(Character const & src) {*this = src;}

std::string const & Character::getName(void) const {return _name;}

unsigned int const & Character::getSize(void) const {return _size;}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_size = rhs.getSize();
		for(unsigned int i = 0; i < _size; i++)
			slot[i] = rhs.slot[i]->clone();
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
	//TO DO : If not full slot add new materia
}

void Character::unequip(int idx)
{
	//TO DO : Unequip the idx materia and put it to the linked list
}

void Character::use(int idx, ICharacter& target)
{
	//TO DO : Active the idc materia's use function on target
}

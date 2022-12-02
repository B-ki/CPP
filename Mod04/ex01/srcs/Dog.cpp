/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:47:52 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor." << std::endl;
	type = "Dog";
	_brain = new Brain();

	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor." << std::endl;
	delete _brain;

	return;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor." << std::endl;
	_brain = new Brain();
	*this = src;

	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog copy assignement operator called"<< std::endl;

	if (this != &rhs)
	{
		type = rhs.getType();
		*_brain = *rhs._brain;
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, Dog const & i)
{
	o << "The value of type is : " << i.getType();

	return o;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

Brain* Dog::getBrain(void)
{
	return _brain;
}

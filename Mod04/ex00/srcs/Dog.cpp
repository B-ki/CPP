/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 10:55:09 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor." << std::endl;
	type = "Dog";

	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor." << std::endl;

	return;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor." << std::endl;
	*this = src;

	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog copy assignement operator called"<< std::endl;

	if (this != &rhs)
		type = rhs.getType();

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

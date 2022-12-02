/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:47:26 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor." << std::endl;

	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor." << std::endl;

	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor." << std::endl;
	*this = src;

	return;
}

std::string Animal::getType(void) const
{
	return type;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal copy assignement operator called"<< std::endl;

	if (this != &rhs)
		type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Animal const & i)
{
	o << "The type is : " << i.getType();

	return o;
}

void Animal::makeSound(void) const
{
	std::cout << "Bwaaaa bwa bwa bwaaaaaaa !" << std::endl;
}

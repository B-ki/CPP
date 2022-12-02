/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 15:48:40 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor." << std::endl;

	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor." << std::endl;

	return;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy constructor." << std::endl;
	*this = src;

	return;
}

std::string AAnimal::getType(void) const
{
	return type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal copy assignement operator called"<< std::endl;

	if (this != &rhs)
		type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, AAnimal const & i)
{
	o << "The type is : " << i.getType();

	return o;
}

void AAnimal::makeSound(void) const
{
	std::cout << "Bwaaaa bwa bwa bwaaaaaaa !" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:13:36 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor." << std::endl;

	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor." << std::endl;

	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
	*this = src;

	return;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal copy assignement operator called"<< std::endl;

	if (this != &rhs)
		this->type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << "The value of type is : " << i.getType();

	return o;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Bwwweee bwwwwee" << std::endl;
}

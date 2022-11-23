/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:20:44 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor." << std::endl;
	type = "WrongCat";

	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor." << std::endl;

	return;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor." << std::endl;
	*this = src;

	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat copy assignement operator called"<< std::endl;

	if (this != &rhs)
		this->type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, WrongCat const & i)
{
	o << "The value of type is : " << i.getType();

	return o;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meeeoow Meeeeow" << std::endl;
}

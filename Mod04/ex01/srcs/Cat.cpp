/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:10:17 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor." << std::endl;
	type = "Cat";

	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor." << std::endl;

	return;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor." << std::endl;
	*this = src;

	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat copy assignement operator called"<< std::endl;

	if (this != &rhs)
		this->type = rhs.getType();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Cat const & i)
{
	o << "The value of type is : " << i.getType();

	return o;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeoooow" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/14 15:19:13 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Fixed default constructor." << std::endl;
	this->_rawBits = 0;

	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed destructor." << std::endl;

	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Fixed copy constructor." << std::endl;
	*this = src;

	return;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Fixed copy assignement operator called"<< std::endl;

	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << "The value of _rawBits is : " << i.getRawBits();

	return o;
}

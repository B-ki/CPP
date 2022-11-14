/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/14 15:18:42 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Fixed default constructor." << std::endl;
	this->_rawBits = 0;

	return;
}

Fixed::Fixed(int const & i)
{
	this->_rawBits = (i << this->_nbFract);

	return;
}

Fixed::Fixed(float const & f)
{
	this->_rawBits = (int)roundf(f * (1 << this->_nbFract));

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

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (float)(1 << this->_nbFract));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() / (1 << this->_nbFract));
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

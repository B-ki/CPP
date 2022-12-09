/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 14:08:45 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor" << std::endl;
	this->_rawBits = 0;

	return;
}

Fixed::Fixed(int const & i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (i << this->_nbFract);

	return;
}

Fixed::Fixed(float const & f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(f * (1 << this->_nbFract));

	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

int	Fixed::getRawBits(void) const
{
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

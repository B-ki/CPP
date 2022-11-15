/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 11:25:43 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
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
	return;
}

Fixed::Fixed(Fixed const & src)
{
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
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

bool Fixed::operator<(Fixed const & rhs)
{
	if (this->_rawBits < rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(Fixed const & rhs)
{
	if (this->_rawBits <= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>(Fixed const & rhs)
{
	if (this->_rawBits > rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(Fixed const & rhs)
{
	if (this->_rawBits >= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==(Fixed const & rhs)
{
	if (this->_rawBits == rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(Fixed const & rhs)
{
	if (this->_rawBits != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	Fixed ret;
	ret.setRawBits(_rawBits + rhs.getRawBits());

	return ret;
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	Fixed ret;
	ret.setRawBits(_rawBits - rhs.getRawBits());

	return ret;
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	Fixed ret;
	ret.setRawBits((_rawBits * rhs.getRawBits()) >> _nbFract);

	return ret;
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	Fixed ret;
	ret.setRawBits((_rawBits <<_nbFract) / rhs.getRawBits());

	return ret;
}

Fixed & Fixed::operator++(void)
{
	++_rawBits;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	_rawBits++;
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	--_rawBits;

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	_rawBits--;
	return (temp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

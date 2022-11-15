/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 14:48:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0),_y(0)
{
	return;
}

Point::Point(const float &a, const float &b) : _x(a),_y(b)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point::Point(Point const &src): _x(src.getX()), _y(src.getY())
{
	return;
}

Fixed	Point::getX(void) const
{
	return _x;
}

Fixed	Point::getY(void) const
{
	return _y;
}

std::ostream& operator<<(std::ostream & o, Point const & i)
{
	o << "The value of _x is : " << i.getX().getRawBits() << " and _y : "
		<< i.getY().getRawBits();

	return o;
}

Fixed	det(Point const &a, Point const &b)
{
	return a.getX() * b.getY() - a.getY() * b.getX();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 13:56:15 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point point)
{
	Point v1(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point v2(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());

	Fixed a1 = (det(point, v2) - det(a, v2)) / (det(v1, v2));
	Fixed b1 = (det(a, v1) - det(point, v1)) / (det(v1, v2));
	
	if (a1 > 0 && b1 > 0 && a1 + b1 < 0)
		return true;
	else
		return false;
}

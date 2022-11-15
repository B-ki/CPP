/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:33:04 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/15 14:31:28 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP 

#include <string>
#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed	const _x;
		Fixed	const _y;
	
	public:
		Point(void);
		Point(Point const &src);
		Point(float const &a, float const &b);
		~Point(void);
	
		Fixed getX(void) const;
		Fixed getY(void) const;
};

std::ostream & operator<<(std::ostream & o, Point const & i);

Fixed det(Point const &a, Point const &b);

bool bsp(Point const a, Point const b, Point const c, Point point);

#endif 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 14:24:27 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(1, 0);
	Point b(3, 0);
	Point c(2, 2);
	Point inside(2, 1);
	Point outside(4, 4);
	Point outside2(2, 0);

	std::cout << "Point a : " << a.getX().toInt() << "," << a.getY().toInt() <<std::endl;
	std::cout << "Point b : " << b.getX().toInt() << "," << b.getY().toInt() <<std::endl;
	std::cout << "Point c : " << c.getX().toInt() << "," << c.getY().toInt() <<std::endl;
	std::cout << "Point inside : " << inside.getX().toInt() << "," << inside.getY().toInt() <<std::endl;
	std::cout << "Point outside : " << outside.getX().toInt() << "," << outside.getY().toInt() <<std::endl;
	std::cout << "Point outside2 : " << outside2.getX().toInt() << "," << outside2.getY().toInt() <<std::endl;
	if (bsp(a, b, c, inside))
		std::cout << "Point inside is really inside abc" << std::endl;
	else
		std::cout << "Point inside is absolutely not inside abc" << std::endl;
	if (bsp(a, b, c, outside))
		std::cout << "Point outside is really inside abc" << std::endl;
	else
		std::cout << "Point outside is absolutely not inside abc" << std::endl;
	if (bsp(a, b, c, outside2))
		std::cout << "Point outside2 is really inside abc" << std::endl;
	else
		std::cout << "Point outside2 is absolutely not inside abc" << std::endl;
	if (bsp(a, b, c, a))
		std::cout << "Point a is really inside abc" << std::endl;
	else
		std::cout << "Point a is absolutely not inside abc" << std::endl;
	return 0;
}

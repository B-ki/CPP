/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 14:22:43 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed(5.05f) / Fixed ( 2 ));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << c << std::endl;
	Fixed d;
	std::cout << --d << std::endl;
	std::cout << d-- << std::endl;
	std::cout << d << std::endl;
	Fixed e;
	e++;
	e++;
	if (a >= b)
		std::cout << a << " >= " << b << std::endl;
	else
		std::cout << a << " !>= " << b << std::endl;
	if (a <= e)
		std::cout << a << " <= " << e << std::endl;
	else
		std::cout << a << " !<= " << e << std::endl;
	if (a > e)
		std::cout << a << " > " << e << std::endl;
	else
		std::cout << a << " !> " << e << std::endl;
	if (a < b)
		std::cout << a << " < " << b << std::endl;
	else
		std::cout << a << " !< " << b << std::endl;
	if (a == e)
		std::cout << a << " == " << e << std::endl;
	else
		std::cout << a << " != " << e << std::endl;
	if (a != b)
		std::cout << a << " != " << b << std::endl;
	else
		std::cout << a << " == " << b << std::endl;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:48:21 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 21:17:04 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP 

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_rawBits;
		static const int	_nbFract = 8;
	
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const & i);
		Fixed(float const & f);
		~Fixed(void);
	
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		Fixed & operator=(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);
		
		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & min(Fixed const & a, Fixed const & b);
		static Fixed& max(Fixed & a, Fixed & b);
		static const Fixed& max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif 

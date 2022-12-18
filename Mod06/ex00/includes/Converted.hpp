/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converted.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:52:43 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/17 20:56:39 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTED_HPP
#define CONVERTED_HPP 

#include <string>
#include <iostream>

class Converted
{
	public:
		Converted(void);
		Converted(Converted const & src);
		Converted(const std::string s);
		~Converted(void);

		std::string getS(void) const;
		char getC(void) const;
		int getI(void) const;
		float getF(void) const;
		double getD(void) const;

		Converted & operator=(Converted const & rhs);

	protected:

	private:
		std::string _s;
		char		_c;
		int			_i;
		float		_f;
		double		_d;

};

std::ostream & operator<<(std::ostream & o, Converted const & i);

#endif 

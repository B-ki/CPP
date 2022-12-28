/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:50:29 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/22 17:34:25 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP 

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);

		void addNumber(int n);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	protected:

	private:
		Span(void);
		unsigned int _N;
		std::vector<int> _vect;

};

#endif 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/22 12:58:06 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0) {return;}

Span::Span(unsigned int n) : _N(n) {return;}

Span::~Span(void) {return;}

Span::Span(Span const & src) {*this = src;return;}

Span & Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_vect = rhs._vect;
	}
	return *this;
}

void Span::addNumber(int n) 
{
	if (_vect.size() < _N)
		_vect.push_back(n);
	else
		throw (std::exception());
}

unsigned int Span::shortestSpan(void)
{
	if (!_N || _N == 1)
		throw (std::exception());
	long diff = INT_MAX;
	for (unsigned long i = 1; i < _vect.size() - 1; i++)
	{
		for (unsigned long j = i + 1; j < _vect.size(); j++)
		{
			if (std::abs(_vect[i] - _vect[j]) < diff)
				diff = std::abs(_vect[i] - _vect[j]); 
		}
	}
	return diff;
}

unsigned int Span::longestSpan(void)
{
	if (!_N || _N == 1)
		throw (std::exception());
	return *std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end());
}

void Span::addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (; begin != end; begin++)
		addNumber(*begin);
}

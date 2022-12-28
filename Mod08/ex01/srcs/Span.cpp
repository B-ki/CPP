/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/22 17:46:25 by rmorel           ###   ########.fr       */
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
	std::sort(_vect.begin(), _vect.end());
	size_t dist = UINT_MAX;
	for (std::vector<int>::iterator it = _vect.begin() + 1; it != _vect.end(); it++)
	{
		if (static_cast<size_t>(*it > *(it - 1) ? *it - *(it - 1) : *(it - 1) - *it) < dist)
			dist = abs(*it - *(it - 1));
	}
	return dist;
}

unsigned int Span::longestSpan(void)
{
	if (!_N || _N == 1)
		throw (std::exception());
	return *std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end());
}

void Span::addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) +_vect.size() > _N)
		throw (std::exception());
	_vect.insert(_vect.end(), begin, end);
}

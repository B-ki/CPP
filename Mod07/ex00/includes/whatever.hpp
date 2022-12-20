/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:45:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/20 18:10:33 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP 

#include <string>
#include <iostream>

template<typename T>
T  max(T const & x, T const & y)
{
	return ((x >= y ? x : y));
}

template<typename T>
T  min(T const & x, T const & y)
{
	return ((x >= y ? y : x));
}

template<typename T>
void  swap(T & x, T & y)
{
	T tmp = y;
	y = x;
	x = tmp;
	return;
}

#endif 

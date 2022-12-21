/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:45:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 21:45:27 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP 

#include <string>
#include <iostream>

template<typename T>
void  iter(T * array, int size, void (*function)(T &))
{
	if (function == NULL || !array)
		return;
	for (int i = 0; i < size; i++)
		function(array[i]);
	return;
}

#endif 

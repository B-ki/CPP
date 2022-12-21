/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:45:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 22:46:59 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP 

#include <string>
#include <iostream>
#include <iterator>

template<typename Container>
typename Container::iterator easyfind(Container &c, int n)
{
	typedef typename Container::iterator it;
	for (it i = c.begin(); i < c.end(); i++)
	{
		if (*i == n)
			return i;
	}
	throw std::exception();
}

#endif 

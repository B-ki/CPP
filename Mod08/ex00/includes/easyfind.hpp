/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:45:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/28 10:30:59 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP 

#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

template<typename Container>
typename Container::iterator easyfind(Container &c, int n)
{
	if (find(c.begin(), c.end(), n) != c.end())
		return find(c.begin(),c.end(), n);
	throw std::exception();
}

#endif 

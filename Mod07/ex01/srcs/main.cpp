/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/20 18:51:44 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >
void printer(T & i)
{
	std::cout << i;
}

template<typename T>
void increment(T & i)
{
	i++;
}

int main(void)
{
	int arr1[4] = {1, 2, 3, 4};
	int *arr = NULL;
	iter(arr1, 0, &printer);
	iter(arr, 0, &printer);
	iter(arr1, 4, &printer);
	std::cout << std::endl;
	iter(arr1, 4, &increment);
	iter(arr1, 4, &printer);
	std::cout << std::endl;
	
	char arr2[4] = {'c', 'a', 'd', 'e'};
	iter(arr2, 4, &printer);
	std::cout << std::endl;
	iter(arr2, 4, &increment);
	iter(arr2, 4, &printer);
	std::cout << std::endl;

	return 0;
}

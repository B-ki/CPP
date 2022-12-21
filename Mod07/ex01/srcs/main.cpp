/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 21:45:36 by rmorel           ###   ########.fr       */
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

template<typename T>
void print( T & x ) 
{
	std::cout << x << std::endl;
	return;
}

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void)
{
	{
		int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];

		iter( tab, 5, &print<int> );
		iter( tab2, 5, &print<Awesome> );
	}
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
	}

	return 0;
}

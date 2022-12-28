/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/28 14:31:22 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <easyfind.hpp>
#include <vector>
#include <map>
#include <climits>

int main(void)
{
	std::vector<int> ar;
	ar.push_back(1);
	ar.push_back(2);
	ar.push_back(3);
	ar.push_back(4);
	ar.push_back(5);
	ar.push_back(6);
	ar.push_back(7);
	std::cout << "ar = [";
	for (int i = 0; i < 7; i++)
	{
		if (i)
			std::cout << ", ";
		std::cout << ar[i];
	}
	std::cout << "]\n";
	std::cout << "Answer should be 3: " << *::easyfind(ar, 3) << std::endl;
	try {
		std::cout << *::easyfind(ar, 8) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error, can't find 8 : " << e.what() << std::endl;
	}
	try {
		std::cout << *::easyfind(ar, -2) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error, can't find -2 : " << e.what() << std::endl;
	}
	try {
		std::cout << *::easyfind(ar, INT_MAX) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error, can't find INT_MAX : " << e.what() << std::endl;
	}
	try {
		std::cout << *::easyfind(ar, INT_MIN) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error, can't find INT_MIN : " << e.what() << std::endl;
	}

    return 0;
}

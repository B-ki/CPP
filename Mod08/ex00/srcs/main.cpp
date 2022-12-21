/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 22:46:48 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <easyfind.hpp>
#include <vector>

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
	std::cout << *::easyfind(ar, 3) << std::endl;
	try {
		std::cout << *::easyfind(ar, 8) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

    return 0;
}

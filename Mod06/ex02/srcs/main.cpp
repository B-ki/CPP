/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/20 16:43:25 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base *generate(void)
{
	int i = rand() % 3;
	switch(i)
	{
		case 0:
			std::cout << "A generated\n";
			return new A;
		case 1:
			std::cout << "B generated\n";
			return new B;
		case 2:
			std::cout << "C generated\n";
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	std::cout << "Identifying by pointer type : ";
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "Error\n";
}

void identify (Base& p)
{
	std::cout << "Identifying by reference type : ";
	try {
		A& ref_A = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)ref_A;
	} catch (std::exception &bc) {
		try {
			B& ref_B = dynamic_cast<B&>(p);
			std::cout << "B\n";
			(void)ref_B;
		} catch (std::exception &bc) {
			try {
				C& ref_C = dynamic_cast<C&>(p);
				std::cout << "C\n";
				(void)ref_C;
			} catch (std::exception &bc) {
				std::cout << "Conversion not OK: " << bc.what() << std::endl;
			}
		}
	}
}



int main(void)
{
	std::srand(std::time(0));
	identify(NULL);
	identify(generate());
	identify(*generate());
	return (0);
}

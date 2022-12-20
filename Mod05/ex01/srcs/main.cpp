/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/07 21:19:45 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat rcarles("Rems", 150);
	Bureaucrat nthimoni("Nicos", 1);
	Form B52("B52", 52, 52);
	Form B150("B52", 150, 150);

	std::cout << rcarles << std::endl;
	rcarles.incrementGrade();
	std::cout << rcarles << std::endl;
	rcarles.decrementGrade();
	try {
		rcarles.decrementGrade();
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << rcarles << std::endl;
	try {
		rcarles.signForm(B52);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		rcarles.signForm(B150);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;

	std::cout << nthimoni << std::endl;
	try {
		nthimoni.incrementGrade();
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << nthimoni << std::endl;
	nthimoni.decrementGrade();
	std::cout << nthimoni << std::endl;
	try {
		nthimoni.signForm(B52);
		nthimoni.signForm(B150);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}

	return 0;
}


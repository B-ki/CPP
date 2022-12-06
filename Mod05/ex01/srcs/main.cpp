/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 11:18:55 by rmorel           ###   ########.fr       */
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
	rcarles.decrementGrade();
	std::cout << rcarles << std::endl;
	rcarles.signForm(B52);
	rcarles.signForm(B150);
	std::cout << std::endl;

	std::cout << nthimoni << std::endl;
	nthimoni.incrementGrade();
	std::cout << nthimoni << std::endl;
	nthimoni.decrementGrade();
	std::cout << nthimoni << std::endl;
	rcarles.signForm(B52);
	rcarles.signForm(B150);

	return 0;
}


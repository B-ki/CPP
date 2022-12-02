/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 21:16:02 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat rcarles("Rems", 150);
	Bureaucrat nthimoni("Nicos", 1);
	ShrubberyCreationForm B52("Joe");
	ShrubberyCreationForm B150("Bill");
	
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
	nthimoni.signForm(B52);
	nthimoni.signForm(B150);
	nthimoni.executeForm(B52);

	return 0;
}


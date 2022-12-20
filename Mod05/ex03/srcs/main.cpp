/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/09 21:40:45 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main(void)
{
	std::srand(std::time(0));
	Bureaucrat nthimoni("Nicos", 1);
	Bureaucrat gus("Gus", 30);
	Bureaucrat leo("Leo", 50);
	Bureaucrat arturo("Arthur", 80);
	Bureaucrat tea("Tea", 140);
	Bureaucrat rcarles("Rems", 150);
	PresidentialPardonForm B5("Tim");
	PresidentialPardonForm B25("Duncan");
	RobotomyRequestForm B45("Bill");
	RobotomyRequestForm B72("Joe");
	ShrubberyCreationForm B137("Mike");
	ShrubberyCreationForm B145("Darcy");

	std::cout << nthimoni << std::endl << gus << std::endl << leo << std::endl << arturo << std::endl << tea << std::endl<< rcarles << std::endl;
	try {
		rcarles.signForm(B145);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		tea.signForm(B145);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		tea.executeForm(B145);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		tea.executeForm(B137);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		arturo.executeForm(B137);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		arturo.signForm(B137);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		arturo.executeForm(B137);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		leo.signForm(B72);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		leo.executeForm(B72);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		gus.executeForm(B72);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		gus.executeForm(B45);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		gus.signForm(B45);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		gus.executeForm(B45);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		nthimoni.signForm(B25);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		nthimoni.signForm(B5);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		nthimoni.executeForm(B25);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		nthimoni.executeForm(B5);
	}
	catch(std::exception& e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl;

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotoqweqweqwey request", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	nthimoni.signForm(*rrf);
	nthimoni.executeForm(*rrf);	
	delete rrf;
	

	return 0;
}


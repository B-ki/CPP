/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/06 11:16:06 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
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
	rcarles.signForm(B145);
	tea.signForm(B145);
	tea.executeForm(B145);
	tea.executeForm(B137);
	arturo.executeForm(B137);
	arturo.signForm(B137);
	arturo.executeForm(B137);
	leo.signForm(B72);
	leo.executeForm(B72);
	gus.executeForm(B72);
	gus.executeForm(B45);
	gus.signForm(B45);
	gus.executeForm(B45);
	nthimoni.signForm(B25);
	nthimoni.signForm(B5);
	nthimoni.executeForm(B25);
	nthimoni.executeForm(B5);

	std::cout << std::endl;

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	nthimoni.signForm(*rrf);
	nthimoni.executeForm(*rrf);
		

	return 0;
}


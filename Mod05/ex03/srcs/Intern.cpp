/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/06 11:15:33 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(Intern const & src) {*this = src;}

//##########          GETTER & SETTER          ##############

//##########          OPERATOR OVERLOADING          ##############

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

//##########          MEMBERS FUNCTION          ##############

AForm* Intern::makeForm(const std::string name, const std::string target) const
{
	AForm* ret;
	std::string arr[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	for (; i < 3; i++)
	{
		if (!arr[i].compare(name))
			break;
	}
	switch(i) {
		case 0:
			ret = new PresidentialPardonForm(target);
			break;
		case 1:
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
			ret = new ShrubberyCreationForm(target);
			break;
		case 3:
			std::cout << "This form doesn't exist, choose between presidential pardon, robotomy request or shrubbery creation" << std::endl;
			return NULL;
	}
	std::cout << "Intern creates " << ret->getName() << std::endl;
	return (ret);
}

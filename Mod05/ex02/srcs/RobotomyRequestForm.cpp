/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/06 11:17:02 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
	gradeSign = 72;
	gradeExec = 45;
	_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequestForm", 72, 45) {_target = t;};

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {*this = src;}

//##########          GETTER & SETTER          ##############

const std::string & RobotomyRequestForm::getName(void) const {return name;};
bool RobotomyRequestForm::getSigned(void) const {return checkSigned;};
unsigned int RobotomyRequestForm::getSignGrade(void) const {return gradeSign;};
unsigned int RobotomyRequestForm::getExecGrade(void) const {return gradeExec;};
std::string RobotomyRequestForm::getTarget(void) const {return _target;};

//##########          OPERATOR OVERLOADING          ##############

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		_target = rhs._target;

	return *this;
}

std::ostream& operator<<(std::ostream & o, RobotomyRequestForm const & i)
{
	o <<  "AForm " << i.getName() << ", signed : " << i.getSigned();
	o << ", signGrade : " << i.getSignGrade() << ", execGrade " << i.getExecGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > gradeExec)
		throw GradeTooLowException();
	else if (!checkSigned)
		throw NotSignedException();
	int i = rand() % 2;
	std::cout << "Drillllllllll. Drillllllllll." << std::endl;
	if (i)
		std::cout << executor.getName() << " has been succesfully robotomized." << std::endl;
	else
		std::cout << "Oops, something went wrong." << std::endl;
}

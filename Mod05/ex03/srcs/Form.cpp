/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 16:28:21 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

AForm::AForm(void) : name("Default"),checkSigned(false),gradeSign(150),gradeExec(150) {}

AForm::AForm(std::string n, unsigned int g1, unsigned int g2) : name(n), checkSigned(false), gradeSign(g1), gradeExec(g2) {};

AForm::~AForm(void) {}

AForm::AForm(AForm const & src) : name(src.name),checkSigned(src.checkSigned),gradeSign(src.gradeSign),gradeExec(src.gradeExec) {}

//##########          GETTER & SETTER          ##############

const std::string & AForm::getName(void) const {return name;};
bool AForm::getSigned(void) const {return checkSigned;};
unsigned int AForm::getSignGrade(void) const {return gradeSign;};
unsigned int AForm::getExecGrade(void) const {return gradeExec;};

//##########          OPERATOR OVERLOADING          ##############

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
	{
		checkSigned = rhs.getSigned();
		gradeSign = rhs.getSignGrade();
		gradeExec = rhs.getExecGrade();
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, AForm const & i)
{
	o <<  "AForm " << i.getName() << ", signed : " << i.getSigned();
	o << ", signGrade : " << i.getSignGrade() << ", execGrade " << i.getExecGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void AForm::beSigned(const Bureaucrat bur)
{
	if (bur.getGrade() > gradeSign)
		throw GradeTooLowException(); 
	checkSigned = true;
}

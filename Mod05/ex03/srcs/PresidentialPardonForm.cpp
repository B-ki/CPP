/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/06 11:17:42 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
	gradeSign = 25;
	gradeExec = 5;
	_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5) {_target = t;};

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {*this = src;}

//##########          GETTER & SETTER          ##############

const std::string & PresidentialPardonForm::getName(void) const {return name;};
bool PresidentialPardonForm::getSigned(void) const {return checkSigned;};
unsigned int PresidentialPardonForm::getSignGrade(void) const {return gradeSign;};
unsigned int PresidentialPardonForm::getExecGrade(void) const {return gradeExec;};
std::string PresidentialPardonForm::getTarget(void) const {return _target;};

//##########          OPERATOR OVERLOADING          ##############

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		_target = rhs._target;

	return *this;
}

std::ostream& operator<<(std::ostream & o, PresidentialPardonForm const & i)
{
	o <<  "AForm" << i.getName() << ", signed : " << i.getSigned();
	o << ", signGrade : " << i.getSignGrade() << ", execGrade " << i.getExecGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > gradeExec)
		throw GradeTooLowException();
	else if (!checkSigned)
		throw NotSignedException();
	std::cout << executor.getName() << " Was pardonned by Zaphod Beeblebrox." << std::endl;
}

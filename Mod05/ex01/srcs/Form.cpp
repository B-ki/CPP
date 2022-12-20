/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/07 20:39:55 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

Form::Form(void) : _name("Default"),_signed(false),_gradeSign(150),_gradeExec(150) {}

Form::Form(std::string n, unsigned int g1, unsigned int g2) : _name(n), _signed(false), _gradeSign(g1), _gradeExec(g2)
{
	if (g1 < 1 || g2 < 1)
		throw GradeTooHighException();
	else if (g1 > 150 || g2 > 150)
		throw GradeTooLowException();
}

Form::~Form(void) {}

Form::Form(Form const & src) : _name(src._name),_signed(src._signed),_gradeSign(src._gradeSign),_gradeExec(src._gradeExec) {}

//##########          GETTER & SETTER          ##############

const std::string & Form::getName(void) const {return _name;};
bool Form::getSigned(void) const {return _signed;};
unsigned int Form::getSignGrade(void) const {return _gradeSign;};
unsigned int Form::getExecGrade(void) const {return _gradeExec;};

//##########          OPERATOR OVERLOADING          ##############

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		_signed = rhs.getSigned();
		_gradeSign = rhs.getSignGrade();
		_gradeExec = rhs.getExecGrade();
	}

	return *this;
}

std::ostream& operator<<(std::ostream & o, Form const & i)
{
	o <<  "Form " << i.getName() << ", signed : " << i.getSigned() << ", signGrade : " << i.getSignGrade() << ", execGrade " << i.getExecGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void Form::beSigned(const Bureaucrat bur)
{
	if (bur.getGrade() > _gradeSign)
		throw GradeTooLowException(); 
	_signed = true;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "Grade too low";
}

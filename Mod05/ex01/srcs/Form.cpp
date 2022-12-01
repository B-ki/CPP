/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 17:41:03 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

Form::Form(void) : _name("Default"),_signed(false),_gradeSign(150),_gradeExec(150) {}

Form::~Form(void) {}

Form::Form(Form const & src) : _name(src._name),_signed(src._signed),_gradeSign(src._gradeSign),_gradeExec(src._gradeExec) {}

//##########          GETTER & SETTER          ##############

const std::string & Form::getName(void) const {return _name;};
bool Form::getSigned(void) const {return _signed;};
int Form::getSignGrade(void) const {return _gradeSign;};
int Form::getExecGrade(void) const {return _gradeExec;};

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

void beSigned(const Bureaucrat bur)
{
	//TO DO
}

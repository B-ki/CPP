/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/07 21:06:05 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

Bureaucrat::Bureaucrat(void) : _name("Default"),_grade(LOW) {}

Bureaucrat::Bureaucrat(std::string n, unsigned int i) : _name(n)
{
	if (i < 1)
		throw GradeTooHighException();
	else if (i > 150)
		throw GradeTooLowException();
	else
		_grade = i;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name),_grade(src._grade) {}

//##########          GETTER & SETTER          ##############

const std::string & Bureaucrat::getName(void) const {return _name;}

unsigned int Bureaucrat::getGrade(void) const {return _grade;}

//##########          OPERATOR OVERLOADING          ##############

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream& operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << "Name " << i.getName() << ", bureaucrat grade " << i.getGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void	Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(AForm& form) const
{ 
	try {
		form.beSigned(*this);
		std::cout << _name << " signed the form " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't sign the form " << form.getName() << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 17:42:58 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

Bureaucrat::Bureaucrat(void) : _name("Default"),_grade(LOW) {}

Bureaucrat::Bureaucrat(std::string n, unsigned int i) : _name(n)
{
	try
	{
		if (i < 1 || i > 150)
			throw GradeTooLowException();
		else
			_grade = i;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "Grade must be between 1 and 150." << std::endl;
	}
};

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
	try
	{
		if (_grade == 1)
			throw GradeTooHighException();
		else
			_grade--;
	}
	catch (GradeTooHighException& e)
	{
		std::cout << "You can't increment the maximum grade." << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException();
		else
			_grade++;
	}
	catch (std::exception& e)
	{
		std::cout << "You can't decrement the minimum grade." << std::endl;
	}
}

void signForm(Form form)
{
	// TO DO
}

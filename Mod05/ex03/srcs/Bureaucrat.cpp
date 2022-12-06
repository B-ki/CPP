/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/05 09:28:45 by rmorel           ###   ########.fr       */
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

void Bureaucrat::signForm(AForm& form) const
{ 
	try {
		form.beSigned(*this);
		std::cout << _name << " signed the form " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << _name << " couldn't sign the form " << form.getName() << " because grade was too low" << std::endl;
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << _name << " couldn't sign the form " << form.getName() << " because grade was too high" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (AForm::NotSignedException &d) {
		std::cout << _name << " couldn't execute the form " << form.getName() << " because it was not signed before" << std::endl;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << " because grade was too low" << std::endl;
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << _name << " couldn't execute the form " << form.getName() << " because grade was too high" << std::endl;
	}
}

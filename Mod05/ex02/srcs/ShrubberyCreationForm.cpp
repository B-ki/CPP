/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 21:25:23 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//##########          CONSTRUCTORS & DESTRUCTORS          ##############

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	gradeSign = 145;
	gradeExec = 137;
	_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("ShrubberyCreationForm", 145, 137) {_target = t;};

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {*this = src;}

//##########          GETTER & SETTER          ##############

const std::string & ShrubberyCreationForm::getName(void) const {return name;};
bool ShrubberyCreationForm::getSigned(void) const {return checkSigned;};
unsigned int ShrubberyCreationForm::getSignGrade(void) const {return gradeSign;};
unsigned int ShrubberyCreationForm::getExecGrade(void) const {return gradeExec;};
std::string ShrubberyCreationForm::getTarget(void) const {return _target;};

//##########          OPERATOR OVERLOADING          ##############

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		_target = rhs._target;

	return *this;
}

std::ostream& operator<<(std::ostream & o, ShrubberyCreationForm const & i)
{
	o <<  "ShrubberyForm " << i.getName() << ", signed : " << i.getSigned();
	o << ", signGrade : " << i.getSignGrade() << ", execGrade " << i.getExecGrade();

	return o;
}

//##########          MEMBERS FUNCTION          ##############

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > gradeExec)
		throw GradeTooLowException();
	std::string name;

	name = executor.getName() + "_shrubbery";
	std::ofstream ofs(name.c_str(), std::ifstream::out);
	ofs <<"    _\\/_ "<<std::endl<<"     /\\ "<<std::endl<<"     /\\"<<std::endl<<"    /  \\"<<std::endl<<"    /~~\\o"<<std::endl<<"   /o   \\"<<std::endl<<"  /~~*~~~\\"<<std::endl<<" o/    o \\"<<std::endl<<" /~~~~~~~~\\~`"<<std::endl<<"/__*_______\\"<<std::endl<<"     ||"<<std::endl<<"   \\====/"<<std::endl<<"    \\__/"<<std::endl;
	ofs.close();
}

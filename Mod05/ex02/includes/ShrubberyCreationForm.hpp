/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:45:14 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/02 21:11:30 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP 

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string t);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		virtual const std::string & getName(void) const;
		virtual unsigned int getSignGrade(void) const;
		virtual unsigned int getExecGrade(void) const;
		virtual bool getSigned(void) const;
		std::string getTarget(void) const;

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		virtual void execute(Bureaucrat const & executor) const;

	protected:

	private:
		std::string _target;

};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & i);

#endif 

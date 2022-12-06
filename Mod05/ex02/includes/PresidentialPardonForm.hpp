/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:45:14 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/05 09:15:34 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP 

#include <string>
#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string t);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		virtual const std::string & getName(void) const;
		virtual unsigned int getSignGrade(void) const;
		virtual unsigned int getExecGrade(void) const;
		virtual bool getSigned(void) const;
		std::string getTarget(void) const;

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		virtual void execute(Bureaucrat const & executor) const;

	protected:

	private:
		std::string _target;

};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & i);

#endif 

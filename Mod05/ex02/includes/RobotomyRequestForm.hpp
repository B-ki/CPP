/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:45:14 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/05 09:08:15 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORMFORM_HPP
#define ROBOTOMYREQUESTFORMFORM_HPP 

#include <string>
#include <iostream>
#include <cstdlib>

#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string t);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		virtual const std::string & getName(void) const;
		virtual unsigned int getSignGrade(void) const;
		virtual unsigned int getExecGrade(void) const;
		virtual bool getSigned(void) const;
		std::string getTarget(void) const;

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		virtual void execute(Bureaucrat const & executor) const;

	protected:

	private:
		std::string _target;

};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & i);

#endif 

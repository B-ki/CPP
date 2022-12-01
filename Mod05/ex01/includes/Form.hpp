/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:58:23 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 17:42:18 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP 

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(Form const & src);
		~Form(void);

		const std::string & getName(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool getSigned(void) const;

		Form & operator=(Form const & rhs);

		class GradeTooHighException : public std::exception
		{
			public: 
				virtual const char* what() const throw() {return "Grade too high";};
		};

		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char* what() const throw() {return "Grade too low";};
		};

		void beSigned(const Bureaucrat bur);

	protected:

	private:
		const std::string _name;
		bool _signed;
		int	_gradeSign;
		int	_gradeExec;


};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif 

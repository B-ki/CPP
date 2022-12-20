/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:58:23 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/07 20:36:18 by rmorel           ###   ########.fr       */
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
		Form(std::string n, unsigned int g1, unsigned int g2);
		Form(Form const & src);
		~Form(void);

		const std::string & getName(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;
		bool getSigned(void) const;

		Form & operator=(Form const & rhs);

		class GradeTooHighException : public std::exception
		{
			public: 
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char* what() const throw();
		};

		void beSigned(const Bureaucrat bur);

	protected:

	private:
		const std::string _name;
		bool _signed;
		unsigned int	_gradeSign;
		unsigned int	_gradeExec;


};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif 

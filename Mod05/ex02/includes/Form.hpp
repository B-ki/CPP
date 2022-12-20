/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:58:23 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/07 20:54:42 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP 

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string n, unsigned int g1, unsigned int g2);
		AForm(AForm const & src);
		virtual ~AForm(void);

		virtual const std::string & getName(void) const;
		virtual unsigned int getSignGrade(void) const;
		virtual unsigned int getExecGrade(void) const;
		virtual bool getSigned(void) const;

		AForm & operator=(AForm const & rhs);

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

		class NotSignedException : public std::exception
		{
			public: 
				virtual const char* what() const throw();
		};

		virtual void beSigned(const Bureaucrat bur);
		virtual void execute(Bureaucrat const & executor) const = 0;

	protected:
		const std::string name;
		bool checkSigned;
		unsigned int	gradeSign;
		unsigned int	gradeExec;

	private:


};

std::ostream & operator<<(std::ostream & o, AForm const & i);

#endif 

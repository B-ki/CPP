/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:22:34 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 17:42:10 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP 

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

#define LOW 150
#define HIGH 1


class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string n, unsigned int i);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		const std::string & getName(void) const;
		unsigned int getGrade(void) const;

		Bureaucrat & operator=(Bureaucrat const & rhs);

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

		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form form);

	protected:

	private:
		const std::string _name;
		unsigned int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif 

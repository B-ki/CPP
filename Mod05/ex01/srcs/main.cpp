/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/01 16:53:53 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat rcarles("Rems", 150);
	Bureaucrat nthimoni("Nicos", 1);
	
	std::cout << rcarles << std::endl;
	rcarles.incrementGrade();
	std::cout << rcarles << std::endl;
	rcarles.decrementGrade();
	rcarles.decrementGrade();
	std::cout << rcarles << std::endl << std::endl;

	std::cout << nthimoni << std::endl;
	nthimoni.incrementGrade();
	std::cout << nthimoni << std::endl;
	nthimoni.decrementGrade();
	std::cout << nthimoni << std::endl;

	return 0;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:20:03 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:09:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP 

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		std::string getType(void) const;

		Animal & operator=(Animal const & rhs);

		virtual void makeSound(void) const;

	protected:
		std::string type;

	private:

};

std::ostream & operator<<(std::ostream & o, Animal const & i);

#endif 

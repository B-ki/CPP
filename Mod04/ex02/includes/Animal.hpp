/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:20:03 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/24 16:18:40 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP 

#include <string>
#include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);

		std::string getType(void) const;

		AAnimal & operator=(AAnimal const & rhs);

		virtual void makeSound(void) const = 0;

	protected:
		std::string type;

	private:

};

std::ostream & operator<<(std::ostream & o, AAnimal const & i);

#endif 

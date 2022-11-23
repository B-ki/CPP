/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:21:37 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:09:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP 

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);

		virtual void makeSound(void) const;

	protected:

	private:

};

std::ostream & operator<<(std::ostream & o, Dog const & i);

#endif 

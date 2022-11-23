/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:10:55 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:13:06 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP 

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);

		std::string getType(void) const;

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void makeSound(void) const;

	protected:
		std::string type;

	private:

};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i);

#endif 

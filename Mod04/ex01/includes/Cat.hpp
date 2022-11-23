/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:33:47 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:09:50 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP 

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void makeSound(void) const;

	protected:

	private:

};

std::ostream & operator<<(std::ostream & o, Cat const & i);

#endif 

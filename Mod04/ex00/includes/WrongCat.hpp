/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:12:55 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 11:15:38 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP 

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);
		
		void makeSound(void) const;

	protected:

	private:

};

std::ostream & operator<<(std::ostream & o, WrongCat const & i);

#endif 

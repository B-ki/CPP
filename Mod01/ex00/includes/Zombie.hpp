/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:00:17 by rmorel            #+#    #+#             */
/*   Updated: 2022/10/28 20:04:26 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP 

#include <string>
#include <iostream>
#include <iomanip>

class	Zombie
{
//		Attributes
	private:
		std::string	_Name;
		
	public:
//		Constructor & Destructor
		Zombie( std::string s );
		~Zombie( void );	

//		Accessor

//		Functions
		void	announce(void);

};

void	randomChump( std::string s);
Zombie*	newZombie( std::string s);

#endif

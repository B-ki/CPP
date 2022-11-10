/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:26:46 by rmorel            #+#    #+#             */
/*   Updated: 2022/10/28 20:14:12 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string s ) : _Name(s)
{
	std::cout << "Constructor called !" << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Default constructor called !" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->_Name << " destructed T.T" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string s )
{
	this->_Name = s;
}

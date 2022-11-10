/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:00:02 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/08 18:42:55 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Weapon
{
	//	Attributes
	private:
		std::string	_type;
	public:
	//	Constructor & Destructor
		Weapon(void);
		Weapon(std::string s);
		~Weapon(void);
	//	Accessor
		std::string const & getType(void) const;
		void	setType(std::string const & str);
};

#endif

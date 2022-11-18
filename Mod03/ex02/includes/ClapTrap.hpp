/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:46:31 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/18 00:54:39 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP 

#include <string>
#include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CLAP "\033[1;34m"
# define SCAV "\033[1;36m"
# define FRAG "\033[1;35m"
# define NORMAL "\033[0m"

class ClapTrap
{
	protected:

		std::string name;
		int	HP;
		int	MP;
		int	AD;
	
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string n);
		~ClapTrap(void);
	
		std::string getName(void) const;
		int getHP(void) const;
		int getMP(void) const;
		int getAD(void) const;

		void setAD(unsigned int dmg);

		void attack(std::string &target);
		void takeDmg(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap & operator=(ClapTrap const & rhs);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);

#endif 

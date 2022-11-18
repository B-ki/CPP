/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:26:34 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/17 23:48:32 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP 

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);

		FragTrap(std::string n);

		void highFiveGuys(void) const;
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif 

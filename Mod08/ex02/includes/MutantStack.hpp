/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:50:29 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/22 15:49:27 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP 

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void) {};
		MutantStack(MutantStack const & src) {*this = src;};
		~MutantStack(void) {};

		MutantStack & operator=(MutantStack const & rhs)
		{
			if (*this != rhs)
			{
				this->c = rhs.c;
				return *this;
			}
		};

		iterator begin() { return this->c.begin();};
		iterator end() { return this->c.end();};

	protected:

	private:

};

#endif 

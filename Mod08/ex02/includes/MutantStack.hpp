/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:50:29 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/22 18:11:08 by rmorel           ###   ########.fr       */
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

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

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
		const_iterator begin() const { return this->c.begin(); };
		const_iterator end() const { return this->c.end(); };
		reverse_iterator rbegin() { return this->c.rbegin(); };
		reverse_iterator rend() { return this->c.rend(); };
		const_reverse_iterator rbegin() const { return this->c.rbegin(); };
		const_reverse_iterator rend() const { return this->c.rend(); };

	protected:

	private:

};

#endif 

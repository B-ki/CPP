/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/28 14:33:32 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{
	{
		// Test 1 : Const iterators :
		const MutantStack<int> mstack;
	//	MutantStack<const int>::const_iterator it = mstack.begin();
	//	T is not const, the value inside T is const
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_reverse_iterator rit = mstack.rbegin();
		(void)it;
		(void)rit;
		
	}
		// Test 2 : Subject :
	std::cout << "MutantStack results:\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(738);
		mstack.push(749);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
		// Test 3 : STL :
	std::cout << "\nAnd now with the list STL :\n";
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.back() << std::endl;
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(738);
		mstack.push_back(749);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
		// Test 4 : Others iterators :
	std::cout << "Other iterators:\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.pop();
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(738);
		mstack.push(749);
		mstack.push(0);
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend() - 1;
		std::cout << "Rbegin : " << *rit << std::endl << "Rend : " << *rite << std::endl;
		std::cout << "From rend - 1 to rbegin :\n";
		while (rite != rit)
		{
			std::cout << *rite << std::endl;
			--rite;
		}
		std::cout << *rit << std::endl;
		std::stack<int> s(mstack);
	}
	return 0;
}

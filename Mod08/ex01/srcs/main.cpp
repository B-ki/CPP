/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/28 10:57:40 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

struct IncGenerator
{
	int current_;
	IncGenerator (int start) : current_(start){};
	int operator() () { return current_++; };
};

int main(void)
{
	{
		// TEST 1 - Subject
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		try {
			sp.addNumber(9);
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}
	}
	{
		// TEST 2 - 10000 input
		Span sp2 = Span(10000);
		std::vector<int> v(10000);
		IncGenerator g(0);
		std::generate( v.begin(), v.end(), g);
		sp2.addMultipleNumber(v.begin(), v.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		try {
			sp2.addNumber(9);
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}
	}
	{
		// TEST 3 - Empty span
		Span sp3 = Span(0);
		try {
			std::cout << sp3.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}
		try {
			std::cout << sp3.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}
	}
	{
		// TEST 4 - Span too short
		Span sp2 = Span(9999);
		std::vector<int> v(10000);
		IncGenerator g(0);
		std::generate( v.begin(), v.end(), g);
		try {
		sp2.addMultipleNumber(v.begin(), v.end());
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}

		try {
			sp2.addNumber(9);
		} catch (std::exception &e) {
			std::cout << "Error, can't add this one : " << e.what() << std::endl;
		}
	}
	return 0;
}

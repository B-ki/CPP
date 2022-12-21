/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/21 21:58:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	{
		Array<char> char_array(10);

		std::cout << char_array << std::endl;
		for(int i = 0; i < 10; i++)
			char_array[i] = 'a' + i;
		std::cout << char_array << std::endl;
		try {
			std::cout << char_array[10];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << char_array[0] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << char_array[-2];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}
	}
	{
		Array<int> int_array(10);

		std::cout << int_array << std::endl;
		for(int i = 0; i < 10; i++)
			int_array[i] = i * 10;
		std::cout << int_array << std::endl;
		try {
			std::cout << int_array[10];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << int_array[0] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << int_array[-2];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}
	}
	{
		Array<std::string> string_array(10);

		std::string arr[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
		std::cout << string_array << std::endl;
		for(int i = 0; i < 10; i++)
			string_array[i] = "Numero " + arr[i];
		std::cout << string_array << std::endl;
		try {
			std::cout << string_array[10];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << string_array[0] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}	try {
			std::cout << string_array[-2];
		} catch (std::exception &e) {
			std::cout << "Can't access this element : " << e.what() << std::endl;
		}
	}
    return 0;
}

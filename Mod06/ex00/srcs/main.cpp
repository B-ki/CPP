/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/20 16:48:09 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <errno.h>
#include <climits>
#include <cmath>
#include <float.h>

enum type
{
	T_CHAR,
	T_INT,
	T_FLOAT,
	T_DOUBLE,
	T_INF_OR_NAN,
	T_WRONG
};

type check_s(std::string s)
{
	std::string::const_iterator it = s.begin();
	if (s.length() == 1 && !std::isdigit(s[0]))
		return T_CHAR;
	else if (s == "inff" or s == "-inff" or s == "nan" or s == "inf"
			or s == "-inf" or s == "nanf" or s == "+inf" or s == "+inff")
		return T_INF_OR_NAN;
	if (*it == '-')
		++it;
	while (it != s.end() && std::isdigit(*it))
		++it;
	if (it == s.end())
		return T_INT;
	else if (*it == '.')
	{
		++it;
		while (it != s.end() && std::isdigit(*it))
			++it;
		if (it == s.end())
			return T_DOUBLE;
		else if (*it == 'f')
		{
			++it;
			if (it == s.end())
				return T_FLOAT;
		}
	}
	return T_WRONG;
}

int	print_nan_inf(std::string s)
{
		std::cout << "Char: impossible\nInt: impossible\n";
		if (s[0] == 'n')
			std::cout << "Float: nanf\nDouble: nan\n";
		else if (s[0] == '-')
			std::cout << "Float: -inff\nDouble: -inf\n";
		else
			std::cout << "Float: +inff\nDouble: +inf\n";
		return 0;
}

int print_char(std::string s)
{
	if (std::isprint(s[0]))
		std::cout << "Char: " << s << std::endl;
	else
		std::cout << "Char: Non displayable\n";
	std::cout << "Int: " << static_cast<int>(s[0]) 
		<< "\nFloat: " << std::fixed << std::setprecision(1)<< static_cast<float>(s[0]) 
		<< "f\nDouble: " << std::fixed << std::setprecision(1)<< static_cast<double>(s[0]) << "\n";
	return 0;
}

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cout << "Only 1 argument required" << std::endl;
		return -1;
	}
	std::string s = argv[1];
	int s_type = check_s(s);
	if (s_type == T_WRONG)
	{
		std::cout << "Parameter must a char, int, float or double only." << std::endl;
		return 0;
	}
	char c;
	long i;
	float f;
	float tmp;
	double d;
	errno = 0;
	switch(s_type)
	{
		case 0:
			break;
		case 1 :
			i = std::strtol(s.c_str(), NULL, 10);
			if (i > INT_MAX || i < INT_MIN)
				errno = ERANGE;
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		case 2 :
			f = std::strtof(s.c_str(), NULL);
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		case 3 :
			d = std::strtod(s.c_str(), NULL);
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			break;
	}
	if (s_type == T_INF_OR_NAN)
		return (print_nan_inf(s));
	else if (s_type == T_CHAR)
		return (print_char(s));
	else
	{
		if (i >= 0 && i <= 256)
		{
			if (std::isprint(c))
				std::cout << "Char: " << c << std::endl;
			else
				std::cout << "Char: Non displayable" << std::endl;
		}
		else
			std::cout << "Char: impossible\n";
		if (errno == ERANGE || d > INT_MAX || d < INT_MIN)
			std::cout << "Int: impossible\n";
		else
			std::cout << "Int: " << i << std::endl;
		if (errno == ERANGE || d > FLT_MAX || d < -FLT_MAX)
			std::cout << "Float: impossible\n";
		else if (std::modf(f, &tmp))
			std::cout << "Float: " << f << "f\n";
		else
			std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f\n";
		if (errno == ERANGE)
			std::cout << "Double: impossible\n";
		else if (d > FLT_MAX || d < -FLT_MAX)
			std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;
		else
			std::cout << "Double: " << d << "\n";
	}
	return 0;
}

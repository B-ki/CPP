/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/19 19:16:59 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <errno.h>
#include <limits.h>
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
	if (s.empty() || s == "-")
		return T_WRONG;
	if (s.length() == 1 && !std::isdigit(s[0]))
		return T_CHAR;
	else if (s == "inff" or s == "-inff" or s == "nan" or s == "inf" or s == "-inf" or s == "nanf")
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

void test_check_s(void)
{
	std::cout << check_s("0") << std::endl
		<< check_s("0.0f") << std::endl
		<< check_s("0.0") << std::endl
		<< check_s("42") << std::endl
		<< check_s("42.0f") << std::endl
		<< check_s("42.0") << std::endl
		<< check_s("inf") << std::endl
		<< check_s("-inf") << std::endl
		<< check_s("inff") << std::endl
		<< check_s("-inff") << std::endl
		<< check_s("nan") << std::endl
		<< check_s("inffff") << std::endl
		<< check_s("nani") << std::endl
		<< check_s("f") << std::endl
		<< check_s(" ") << std::endl
		<< check_s("*") << std::endl
		<< check_s("\n") << std::endl
		<< check_s("\t") << std::endl;
}

void test_limits(void)
{
	std::cout << std::numeric_limits<int>::min() << std::endl
		      << std::numeric_limits<int>::max() << std::endl
		      << std::numeric_limits<float>::min() << std::endl
		      << std::numeric_limits<float>::max() << std::endl
		      << std::numeric_limits<double>::min() << std::endl
		      << std::numeric_limits<double>::max() << std::endl;
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
	std::cout << s_type << std::endl;
	if (s_type == T_WRONG)
	{
		std::cout << "Parameter must a char, int, float or double only." << std::endl;
		return 0;
	}
	char c;
	int i;
	float f;
	double d;
	errno = 0;
	switch(s_type)
	{
		case 1 :
			i = std::strtol(s.c_str(), NULL, 0);
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
	{
		std::cout << "Char: impossible\nInt: impossible\n";
		if (s[s.length() - 1] == 'f')
			std::cout << "Float: " << s.substr(0, s.length() - 1) << "\nDouble: " << s << "\n";
		else
			std::cout << "Float: " << s << "\nDouble: " << s << "f\n";
	}
	if (s_type == T_CHAR)
	{
		if (std::isprint(s[0]))
			std::cout << "Char: " << s << std::endl;
		else
			std::cout << "Char: Non displayable\n";
		std::cout << "Int: impossible\nFloat: impossible\nDouble: impossible\n";
	}
	else if (errno == ERANGE)
		std::cout << "Char: impossible\nInt: impossible\nFloat: impossible\nDouble: impossible\n";
	else
	{
		if (i >= -127 && i <= 128)
		{
			if (std::isprint(c))
				std::cout << "Char: " << c << std::endl;
			else
				std::cout << "Char: Non displayable" << std::endl;
		}
		else
			std::cout << "Char: impossible\n";
		if (errno == ERANGE && (i == INT_MIN || i == INT_MAX))
			std::cout << "Int: " << i << std::endl;
		else
			std::cout << "Int: impossible\n";
		if (errno == ERANGE && (f == FLT_MIN || f == FLT_MAX))
			std::cout << "Float: impossible\n";
		else
			std::cout << "Float: " << f << std::endl;
		std::cout << "Double: " << d << std::endl;
	}
	/*{
		std::cout << "Char: ";
		if (s_type == T_CHAR && std::isprint(s[0]))
			std::cout << c << std::endl;
		else if (s_type == T_CHAR && !std::isprint(s[0]))
			std::cout << "Non displayable" << std::endl;
		else if (s_type == T_INFF_OR_NAN || s_type == T_INF)
			std::cout << "impossible" << std::endl;
		else if (i >= 32 && i <= 128)
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	{
		if (i > std::numeric_limits<int>::min() && i < std::numeric_limits<int>::max())
			std::cout << "Int: " << i << std::endl;
		else
			std::cout << "Int : impossible" << std::endl;
	}
	{
		if (s_type == T_INF)
			std::cout << "Float : " << s << std::endl;
		else if (s_type == T_INT || (int(d) == d && (s_type == T_FLOAT || s_type == T_DOUBLE)))
			std::cout << "Float: " << f << ".0f" << std::endl;
		else if (s_type == T_INT || s_type == T_DOUBLE || s_type == T_FLOAT)
			std::cout << "Float: " << d << "f" << std::endl;
		else if (f < -std::numeric_limits<float>::max() || f > std::numeric_limits<float>::max() || s_type == T_INFF_OR_NAN)
			std::cout << "Float : impossible" << std::endl;
	}
	{
		if (d < -std::numeric_limits<double>::max() || d > std::numeric_limits<double>::max())
			std::cout << "Double : impossible" << std::endl;
		else if (int(d) == d)
			std::cout << "Double : " << d << ".0" << std::endl;
		else
			std::cout << "Double: " << d << std::endl;
	}*/
	return 0;
}

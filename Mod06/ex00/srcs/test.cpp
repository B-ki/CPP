/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:44:36 by rmorel            #+#    #+#             */
/*   Updated: 2022/12/17 21:12:04 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>
#include <iomanip>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cout << "Only 1 argument required" << std::endl;
		return -1;
	}
	std::string literal = argv[1];
    if (literal.length() == 1)
	{
		char c = literal[0];
		std::cout << "Char: " << c << std::endl;

		double d = std::strtod(literal.c_str(), NULL);
		int i = static_cast<int>(d);
		if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
		{
			std::cout << "Int : impossible" << std::endl;
		}
		else
		{
			std::cout << "Int: " << i << std::endl;
		}

		float f = static_cast<float>(i);
		if (f < -std::numeric_limits<float>::max() || f > std::numeric_limits<float>::max())
		{
			std::cout << "Float : impossible" << std::endl;
		}
		else
		{
			std::cout << "Float: " << std::setprecision(1) << f << "f" << std::endl;
		}
		if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
		{
			std::cout << "Double : impossible" << std::endl;
		}
		else
		{
			std::cout << "Double: " << d << std::endl;
		}
    }
	else
	{
        int i;
        float f;
        double d;

        if (literal.find('f') != std::string::npos)
		{
            f = std::strtof(literal.c_str(), NULL);
            i = static_cast<int>(f);
            if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
			{
                std::cout << "Int: impossible" << std::endl;
            }
			else
			{
                std::cout << "Int: " << i << std::endl;
            }
			if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max())
			{
				std::cout << "Float : impossible" << std::endl;
			}
			else
			{
				std::cout << "Float: " << f << std::endl;
			}
            d = static_cast<double>(f);
			if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
			{
				std::cout << "Double : impossible" << std::endl;
			}
			else
			{
				std::cout << "Double: " << d << std::endl;
			}
		}
		else
		{
            d = std::strtod(literal.c_str(), NULL);
            i = static_cast<int>(d);
            if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
			{
                std::cout << "Conversion to int not possible" << std::endl;
            }
			else
			{
                std::cout << "Int: " << i << std::endl;
            }
            f = static_cast<float>(d);
			if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max())
			{
				std::cout << "Float : impossible" << std::endl;
			}
			else
			{
				std::cout << "Float: " << f << std::endl;
			}
			if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
			{
				std::cout << "Double : impossible" << std::endl;
			}
			else
			{
				std::cout << "Double: " << d << std::endl;
			}
        }
    }
    return 0;
}

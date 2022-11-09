/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:00:52 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/09 16:20:08 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac != 4 || !av[1] || !av[2] || !av[3])
	{
		std::cout << "Need 3 not empty parameters : <filename> | s1 | s2" << std::endl;
		return 1;
	}
	std::string		filename(av[1]);
	std::ifstream	ifs(filename, std::ifstream::in);
	std::ofstream	ofs(filename.append(".replace"), std::ifstream::out);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::stringstream 	stream;
	std::string		buffer;
	std::string		sub;
	size_t			len = s1.length();

	stream << ifs.rdbuf();
	buffer = stream.str();
	size_t	pos = buffer.find(s1);
	while (buffer.length())
	{
		if (pos != std::string::npos)
		{
			if (pos == 0)
			{
				ofs << s2; 
				buffer = buffer.substr(len, buffer.length() - len);
			}
			else
			{
				sub = buffer.substr(0, pos);
				ofs << sub << s2;
				buffer = buffer.substr(pos + len, buffer.length() - pos - len);
			}
			pos = buffer.find(s1);
		}
		else
		{
			ofs << buffer;
			break;
		}
	}
	ifs.close();
	return 0;
}

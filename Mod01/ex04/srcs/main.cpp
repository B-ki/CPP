/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <rmorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:00:52 by rmorel            #+#    #+#             */
/*   Updated: 2022/11/23 15:48:16 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac != 4 || !av[1][0] || !av[2][0])
	{
		std::cout << "Need 3 not empty parameters : <filename> | s1 | s2" << std::endl;
		return 1;
	}
	std::string		filename(av[1]);
	std::ifstream	ifs(filename.c_str(), std::ifstream::in);
	std::ofstream	ofs(filename.append(".replace").c_str(), std::ifstream::out);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		buffer;
	size_t			len = s1.length();

	std::getline(ifs, buffer);
	while (!buffer.empty())
	{
		size_t	pos = buffer.find(s1);
		while(pos != std::string::npos)
		{
			buffer.erase(pos, len);
			buffer.insert(pos, s2);
			pos = buffer.find(s1);
		}
		ofs << buffer << std::endl;
		std::getline(ifs, buffer);
	}
	ifs.close();
	ofs.close();
	return 0;
}

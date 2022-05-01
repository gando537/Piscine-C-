/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:18:35 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/02 15:45:25 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

static int getKaren(std::string msg)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == msg)
			return (i);
	}
	return (4);
}

int main(int ac, char *av[])
{
	if (ac != 2)
		return (1);
	enum levels
	{
		DEBUG = 0,
		INFO = 1,
		WARNING = 2,
		ERROR = 3
	};
	Karen karen;

	switch (getKaren(av[1]))
	{
	case DEBUG:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std::cout << std::endl;
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std::cout << std::endl;
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std::cout << std::endl;
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}

	return (0);
}


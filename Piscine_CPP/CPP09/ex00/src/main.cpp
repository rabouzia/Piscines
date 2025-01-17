/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2025/01/17 14:17:36 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac < 2)
			throw (BitcoinExchange::CouldNotOpenException());

		std::ifstream	input;
		std::string		line;

		input.open(av[1]);
		if (!input.is_open())
			throw (BitcoinExchange::CouldNotOpenException());
		getline(input, line);
		if (line != "date | value")
			throw (BitcoinExchange::FormatInvalidException());

		BitcoinExchange	btc;
		btc.run(input);
	}
	catch (std::exception& err)
	{
		std::cerr << "Error: " << err.what() << "." << std::endl;
	}
	return (0);
}
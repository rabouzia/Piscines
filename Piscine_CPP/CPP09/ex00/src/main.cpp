/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/24 15:25:02 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>
# include <fstream>
# include <iostream>


int main(int ac, char **av)
{

	if (ac != 2){
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	
	try
	{
		BitcoinExchange bit;
		bit.ExchangeData(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}
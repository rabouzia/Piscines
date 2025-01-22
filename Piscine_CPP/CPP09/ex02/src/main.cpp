/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2025/01/22 22:50:05 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void parser(char **av, int ac)
{
	for (int i = 1; i < ac; i++) {
		for (size_t j = 0; j < strlen(av[i]); j++) {
			if (!isdigit(av[i][j]))
				throw std::invalid_argument("Error: Non-digit character found");
		}
	}
	for (int i = 1; i < ac;i++)
	{
		if (std::atol(av[i]) > INT_MAX || std::atol(av[i]) < INT_MIN || !strlen(av[i]))
			throw std::invalid_argument("Error: Wrong Number");
		for (int j = i + 1;j < ac;j++)
		{
			if (std::atol(av[i]) == std::atol(av[j]))
				throw std::invalid_argument("Error: Double Number");
		}
	}
}



int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Usage ./PMergeMe 1 2 3 4 " << std::endl; 
		return 1;
	}
	if (ac == 2)
	{
		std::cout << "Please use at least two numbers" << std::endl; 
		return 1;
	}
	
	try
	{
		PmergeMe mrg;
		parser(av, ac);
		mrg.sortVector(av);
		mrg.sortDeque(av);
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RED << std::endl;
	}
}
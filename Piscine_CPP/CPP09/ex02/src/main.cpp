/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/24 15:27:17 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{std::cout << "Please enter more than 1 argument" << std::endl; return 1;}
	
	try
	{
		PmergeMe mrg;
		mrg.sortVector(av);
		mrg.sortDeque(av);
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RED << std::endl;
	}
}
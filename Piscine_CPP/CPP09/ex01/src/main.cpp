/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/24 15:26:05 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "Usage: ./RPN \"expressions\"" << std::endl;
		return 0;
	}
	try
	{
		RPN rpn(av[1]);
		rpn.calculate();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
	return 0;
}
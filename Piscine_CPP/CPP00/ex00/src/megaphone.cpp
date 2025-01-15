/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:40:05 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/13 16:47:14 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void megaphone(char **av)
{
	int i = -1;
	int j = 0;

	while(av[++i])
	{	  
		j = 0;
		while(av[i][j])
			std::cout << (char) std::toupper(av[i][j++]);
	}
}

int main (int ac, char ** av)
{
	(void)av;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		megaphone(av + 1);
	std::cout << std::endl;
	return 0;	
}
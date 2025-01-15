/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:41:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/13 16:39:40 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

bool isValidInput(const std::string &input)
{
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (!std::isalnum(input[i]))
			return false;
	}
	return true;
}
std::string get_input()
{
	std::string input;

	// getline(std::cin, input);
	if (!safe_getline(&input))
		exit(1);
	if (input[0] == '\t' || input[0] == '\n')
	{
		std::cout << "tab not allowed" << std::endl;
		return ("");
	}
	if (!isValidInput(input))
	{
		std::cout << "Not alphanum detected, ignoring..." << std::endl;
		return ("");
	}
	if (input.empty())
	{
		std::cout << "Input can not be empty" << std::endl;
		return ("");
	}
	return (input);
}

bool safe_getline(std::string *str)
{
	if (!std::getline(std::cin, *str))
	{
		if (std::cin.eof())
		{
			std::cout << "ctrl d detected -> End of program." << std::endl;
			return (false);
		}
		else
		{
			std::cout << "Input error occurred. End of program" << std::endl;
			return (false);
		}
	}
	return (true);
}

int main(void)
{
	std::string input;
	Buku book = Buku();

	while (1)
	{
		std::cout << "What do you wanna do ? : ";
		if (!safe_getline(&input))
			break;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else
		{
			std::cout << "This cmd doesnt exists ..." << std::endl;
			continue;
		}
	}
	return (0);
}
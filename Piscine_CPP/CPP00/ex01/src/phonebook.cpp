/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:52:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/13 16:33:01 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "phonebook.hpp"
#include <iostream>

Buku::Buku()
{
	_contact_count = 0;
	std::cout << "PhoneBook created" << std::endl;
}

Buku::~Buku()
{
	std::cout << "PhoneBook destructed" << std::endl;
}

#include <string>

std::string check_word_len(std::string to_check)
{
	if (to_check.length() > 9)
		return to_check.substr(0, 9) + ".";
	if (to_check.length() < 9)
		to_check.append(9 - to_check.length(), ' ');
	return to_check;
}

void Buku::search(void)
{
	std::string input;

	std::cout << "|"
			  << std::setw(6) << "INDEX" << " |"
			  << std::setw(12) << "First Name" << " |"
			  << std::setw(12) << "Last Name" << " |"
			  << std::setw(12) << "Nick Name" << " |"
			  << std::endl;
	for (int i = 0; i < _contact_count; i++)
	{
		std::cout << "|"
				  << std::setw(6) << i << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetFirstName()) << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetLastName()) << " |"
				  << std::setw(12) << check_word_len(_contacts[i].GetNickName()) << " |"
				  << std::endl;
	}
	int n;
	while (1)
	{
		std::cout << "Who do you want to search ?:";
		input = get_input();
		n = atoi(input.c_str());
		if (input == "")
			continue;
		if (n < 0 || n > 7)
		{
			std::cout << "This number is not correct" << std::endl;
			continue;
		}
		if (n > _contact_count)
		{
			std::cout << "This number is not correct" << std::endl;
			continue;
		}
		break;
	}
	return (get_contact(n));
}

void Buku::add()
{
	Contacto contact;
	std::string input;
	int i = 0;
	std::cout << "Please enter your: \n";
	while (i < 5)
	{
		if (i == 0)
		{
			std::cout << "First name: ";
			input = get_input();
			if (input == "")
				continue;
			contact.SetFirstName(input);
			i++;
		}
		if (i == 1)
		{
			std::cout << "\nLast name: ";
			input = get_input();
			if (input == "")
				continue;
			contact.SetLastName(input);
			i++;
		}
		if (i == 2)
		{
			std::cout << "\nNick name: ";
			input = get_input();
			if (input == "")
				continue;
			contact.SetNickName(input);
			i++;
		}
		if (i == 3)
		{
			std::cout << "\nDarkest secret (its for blackmail): ";
			input = get_input();
			if (input == "")
				continue;
			contact.SetDarkSecret(input);
			i++;
		}
		if (i == 4)
		{
			std::cout << "\nPhone number: ";
			input = get_input();
			if (input == "")
				continue;
			contact.SetNumber(input);
			i++;
		}
	}
	_contacts[_contact_count] = contact;
	_contact_count = _contact_count < 7 ? _contact_count + 1 : 0;
}

void Buku::get_contact(int index)
{
	if ((_contacts[index].GetFirstName()).empty())
	{
		std::cout << "\nthis contact is empty: ";
		return;
	}
	std::cout << _contacts[index].GetFirstName() << std::endl;
	std::cout << _contacts[index].GetLastName() << std::endl;
	std::cout << _contacts[index].GetNickName() << std::endl;
	std::cout << _contacts[index].GetDarkSecret() << std::endl;
	std::cout << _contacts[index].GetNumber() << std::endl;
}

int Buku::get_count(void)
{
	return (_contact_count);
}

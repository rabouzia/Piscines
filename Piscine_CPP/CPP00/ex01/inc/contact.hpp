/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:48:37 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/12 16:59:24 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"

class Contacto
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string dark_secret;
	std::string number;

public:
	void SetFirstName(std::string fn);
	void SetLastName(std::string ln);
	void SetNickName(std::string nn);
	void SetDarkSecret(std::string ds);
	void SetNumber(std::string num);

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickName();
	std::string GetDarkSecret();
	std::string GetNumber();

	// int add(Buku *book, std::string input);
};

#endif

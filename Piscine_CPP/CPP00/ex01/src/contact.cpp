/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:35:12 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/13 16:31:13 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void Contacto::SetFirstName(std::string fn)
{
	this->first_name = fn;
}

void Contacto::SetLastName(std::string ln)
{
	this->last_name = ln;
}

void Contacto::SetNickName(std::string nn)
{
	this->nick_name = nn;
}

void Contacto::SetDarkSecret(std::string ds)
{
	this->dark_secret = ds;
}

void Contacto::SetNumber(std::string num)
{
	this->number = num;
}


std::string Contacto::GetFirstName()
{
	return (this->first_name);
}
std::string Contacto::GetLastName()
{
	return (this->last_name);
}
std::string Contacto::GetNickName()
{
	return (this->nick_name);
}
std::string Contacto::GetDarkSecret()
{
	return (this->dark_secret);
}
std::string Contacto::GetNumber(void)
{
	return (this->number);
}
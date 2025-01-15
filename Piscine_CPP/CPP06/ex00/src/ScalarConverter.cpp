/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:44:39 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/04 10:40:58 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>

static bool isPseudoLiteral(std::string &str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : +inff" << std::endl;
        std::cout << "double : +inf" << std::endl;
    }
    else
        return (0);
    return (1);
}

static void displayChar(std::string &str)
{
	if (str.size() == 1 && !std::isdigit(str[0]))
		std::cout << "char : " << static_cast<char>(str[0]) << std::endl;
	else
	{
		int nb = std::atoi(str.c_str());
		if (nb < 32 || nb > 126)
        {	
			std::cout << "char : impossible" << std::endl;
			return;
		}
		if (!std::isprint(nb))
        {
				std::cout << "char : Non-displayable" << std::endl;
			return;
		}
		else
		{
			std::cout << "char : " << static_cast<char>(nb) << std::endl;
			return;
		}
	}
	return ;
}


static void displayInt(std::string &str)
{
	std::stringstream tab;
	long nb;
	tab << str;
	tab >> nb;

	if (tab.fail() || nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
}

static void displayFloat(std::string &str)
{
	std::stringstream tab;
	float nb;
	
	
	tab << str;
	tab >> nb;
	
	if (tab.fail())
		std::cout << "float: impossible";
	else
	{
		std::cout << "float: " << static_cast<float>(nb);
		if (roundf(nb) == nb)
        	std::cout << ".0" << "f";
        else
			std::cout << "f";
	}
	std::cout << std::endl;
}

static void displayDouble(std::string &str)
{
	std::stringstream tab;
	double nb;
	nb = 0;
	
	tab << str;
	tab >> nb;
	
	if  (tab.fail())
		std::cout << "double: impossible";
	else
	{
		std::cout << "double: " << static_cast<double>(nb);
		if (roundf(nb) == nb)
        	std::cout << ".0";
	}
	std::cout << std::endl;
}

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &scalar)
{
    *this = scalar;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalar)
{
    (void)scalar;
    return (*this);
}

void ScalarConverter::convert(std::string &str)
{
	if (str[str.length() - 1] == 'f')
		str.pop_back();
    if (isPseudoLiteral(str))
        return ;
    try
    {
        displayChar(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayInt(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayFloat(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        displayDouble(str);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
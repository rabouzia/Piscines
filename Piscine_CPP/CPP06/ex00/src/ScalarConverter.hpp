/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/01 21:02:29 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <sstream> 

#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cmath>

class ScalarConverter
{
    private:
            ScalarConverter();
            ScalarConverter(const ScalarConverter &scalar);
            ~ScalarConverter();
            ScalarConverter &operator=(const ScalarConverter &scalar);
    public:
            static void convert(std::string &str);
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2025/01/18 13:40:18 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <cstdlib>

typedef struct	s_date
{
	int	year;
	int	month;
	int	day;
	int	daysInMonth;
}				t_date;

class BitcoinExchange
{
	private:
		std::map<std::string, double> data;

		void		exchange(std::string date, double amount);
		std::string	trim(std::string line);
		t_date		datetoi(std::string date);
		double		validateAmount(std::string& amount);
		bool		validateDate(t_date& date);
		bool		isleap(int& year);

	public:
		~BitcoinExchange();
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);

		void		run(std::ifstream& in);

		class CouldNotOpenException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class FormatInvalidException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class BadInputException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class NegativeValueException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

		class LargeValueException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};

};

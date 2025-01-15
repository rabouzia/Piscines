/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/30 14:38:46 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <iomanip>
# include <map>

class BitcoinExchange{
	
	private:
			std::map<std::string, double> _map;
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange & operator =(BitcoinExchange const & other);
		~BitcoinExchange();

		bool ProcessFile(std::string file);
		void FillMap(std::string csvFile);
		int ParsingDate(std::string &date);
		void ParsingValue(std::string value, std::string date);
		void ExchangeData(std::string InputFile);
			
};
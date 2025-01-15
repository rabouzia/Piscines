/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:34 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/26 16:47:54 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

int main() {
	try {
		BureauCrat b1("Xavier", 1);
		std::cout << b1;
		b1.incrementGrade();
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		BureauCrat b2;
		std::cout << b2;
		b2.decrementGrade();
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		BureauCrat b3("Benyamine", 160);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		BureauCrat b4("Ismael", -5);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
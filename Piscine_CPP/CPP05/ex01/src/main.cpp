/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:34 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/30 16:29:30 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat eric("Eric", 1);
	Bureaucrat homer("Homer", 42);
	Bureaucrat franklin("Franklin", 150);

	Form goToRestaurant("GoToRestaurant", 1, 1);
	Form playPingPong("PlayPingPong", 140, 140);

	try {
		Form gerard("Gerard", 0, 30);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	eric.signForm(goToRestaurant);
	homer.signForm(goToRestaurant);
	franklin.signForm(goToRestaurant);
	franklin.signForm(playPingPong);

	std::cout << std::endl;

	goToRestaurant.beSigned(eric);
	playPingPong.beSigned(eric);
	
	try {
		goToRestaurant.beSigned(homer);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	playPingPong.beSigned(homer);

	try {
		goToRestaurant.beSigned(franklin);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		playPingPong.beSigned(franklin);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
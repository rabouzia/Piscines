/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:17:45 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 19:07:35 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "🏗️ Brain Constructor 🏗️" << std::endl;   
}
 
Brain::Brain(const Brain &copy){
    std::cout << "🏗️ Brain Copy Constructor 🏗️" << std::endl;   
	for (int i = 0; i < 100; ++i) 
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &copy){
    // if (this == &copy)
    //     return *this;
	for (int i = 0; i < 100; i++)
	{	
		if (copy._ideas[i].empty())
			break;
		this->_ideas[i] = copy._ideas[i];
	}	
    return *this;
}

Brain::~Brain(){
    std::cout << "💥 Brain is destroyed 💥" << std::endl;
}
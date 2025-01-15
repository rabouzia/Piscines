/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:17:45 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 17:57:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "🏗️ Brain Constructor 🏗️" << std::endl;   
}
 
Brain::Brain(const Brain &copy){
    std::cout << "🏗️ Brain Copy Constructor 🏗️" << std::endl;   
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy){
    if (this == &copy)
        return *this;
    return *this;
}

Brain::~Brain(){
    std::cout << "💥 Brain is destroyed 💥" << std::endl;
}
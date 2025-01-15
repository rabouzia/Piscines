/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:33:08 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 17:58:19 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "🏗️ WrongAnimal Constructor 🏗️" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "🏗️ WrongAnimal Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
std::string WrongAnimal::getType(void)const{
    return this->_type;
}

void WrongAnimal::makeSound()const{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "💥 WrongAnimal is destroyed 💥" << std::endl;
    
}
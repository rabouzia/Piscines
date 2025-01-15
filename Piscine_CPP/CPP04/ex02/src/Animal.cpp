/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:15:06 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/18 19:04:06 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "animal";
    std::cout << "🏗️ Animal Constructor 🏗️" << std::endl;
}

Animal::Animal(const std::string &type)
{
    this->_type = type;
    std::cout << "🏗️ Animal Constructor 🏗️" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "🏗️ Animal Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

Animal& Animal::operator=(const Animal &other){
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}
std::string Animal::getType(void)const{
    return this->_type;
}

void Animal::makeSound()const{
    std::cout << "animal sound" << std::endl;
}

Animal::~Animal(){
    std::cout << "💥 Animal is destroyed 💥" << std::endl;
}
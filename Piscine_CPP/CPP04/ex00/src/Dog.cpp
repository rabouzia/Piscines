/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:50 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/18 16:16:20 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(){
    std::cout << "🏗️ Dog Constructor 🏗️" << std::endl;   
}
 
Dog::Dog(const Dog &copy){
    std::cout << "🏗️ Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}
void Dog::makeSound() const{
    std::cout << "Waff waff" << std::endl; 
}

std::string Dog::getType(void)const{
    return _type;
}

Dog::~Dog(){
    std::cout << "💥 Dog is destroyed 💥" << std::endl;
}
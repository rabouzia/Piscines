/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:34:29 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 17:58:26 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "🏗️ WrongCat Constructor 🏗️" << std::endl;   
}
 
WrongCat::WrongCat(const WrongCat &copy){
    std::cout << "🏗️ WrongCat Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    if (this == &copy)
        return *this;
    this->_type = copy._type;
    return *this;
}
void WrongCat::makeSound() const{
    std::cout << "cotcotcotcot" << std::endl; 
}

std::string WrongCat::getType(void)const{
    return _type;
}

WrongCat::~WrongCat(){
    std::cout << "💥 WrongCat is destroyed 💥" << std::endl;
    
}
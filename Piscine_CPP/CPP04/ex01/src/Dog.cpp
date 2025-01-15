/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:50 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/21 12:55:56 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(){
	this->burainu = new Brain();
    std::cout << "🏗️ Dog Constructor 🏗️" << std::endl;   
}
 
Dog::Dog(const Dog &copy){
	if(!copy.burainu)
		this->burainu = NULL;
	else
		this->burainu = new Brain(*copy.burainu);
	std::cout << "🏗️ Dog Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy){
   if (this != &copy) {
		delete this->burainu;
		this->_type = copy._type;
		if (copy.burainu == NULL)
			this->burainu = NULL;
		else
			this->burainu = new Brain(*copy.burainu);
	}
	std::cout << "Dog assigned.\n";
	return *this;
}
void Dog::makeSound() const{
    std::cout << "Waff waff" << std::endl; 
}

std::string Dog::getType(void)const{
    return _type;
}

Dog::~Dog(){
	delete this->burainu;
    std::cout << "💥 Dog is destroyed 💥" << std::endl;
}

std::string Dog::getIdea(int idx) const {
	if (this->burainu == NULL)
		return NULL;
	if (idx < 0 || idx >= 100)
		return NULL;
	return this->burainu->_ideas[idx];
}

void Dog::setIdea(int idx, std::string idea) {
	if (this->burainu == NULL)
		return;
	if (idx < 0 || idx >= 100)
		return;
	this->burainu->_ideas[idx] = idea;
}

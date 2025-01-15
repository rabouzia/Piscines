/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:57 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/21 12:57:42 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "🏗️ Cat Constructor 🏗️" << std::endl;   
	this->burainu = new Brain();
}
 
Cat::Cat(const Cat &copy){
	if(!copy.burainu)
		this->burainu = NULL;
	else
		this->burainu = new Brain(*copy.burainu);
	std::cout << "🏗️ Cat Copy Constructor 🏗️" << std::endl;   
    this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy) {
		delete this->burainu;
		this->_type = copy._type;
		if (copy.burainu == NULL)
			this->burainu = NULL;
		else
			this->burainu = new Brain(*copy.burainu);
	}
	std::cout << "Cat assigned.\n";
	return *this;
}
void Cat::makeSound() const{
    std::cout << "Meoowwwwww" << std::endl; 
}

std::string Cat::getType(void)const{
    return _type;
}

Cat::~Cat(){
    std::cout << "💥 Cat is destroyed 💥" << std::endl;
	delete this->burainu;
}

std::string Cat::getIdea(int idx) const {
	if (this->burainu == NULL)
		return NULL;
	if (idx < 0 || idx >= 100)
		return NULL;
	return this->burainu->_ideas[idx];
}


void Cat::setIdea(int idx, std::string idea) {
	if (this->burainu == NULL)
		return;
	if (idx < 0 || idx >= 100)
		return;
	this->burainu->_ideas[idx] = idea;
}

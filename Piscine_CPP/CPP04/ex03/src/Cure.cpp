/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:21 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 12:22:01 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(){ _type = "cure"; }

Cure::Cure(std::string type){ this->_type = type; }

Cure::Cure( const Cure &src ){ 
	*this = src;
	_type = src.getType();
}

Cure* Cure::clone() const{ return (new Cure(*this)); }

Cure::~Cure(){}

void Cure::use(ICharacter &target){
	std::cout << "* heals🧪 " << target.getName() << "'s wounds *" << std::endl;
}


Cure& Cure::operator=( Cure const &rhs ){
	if ( this != &rhs ){
		this->_type = rhs._type;
	}
	return *this;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:23 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 11:11:29 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria (){ _type = "ice"; }

Ice::Ice(std::string _type){ this->_type = _type; }

Ice::Ice( const Ice &src ){
	*this = src;
	_type = src.getType();
}

Ice *Ice::clone() const{ return(new Ice(*this)); }

Ice::~Ice(){}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice🧊 bolt at " << target.getName() << " *" << std::endl;
}

Ice& Ice::operator=( Ice const &rhs ){
	if ( this != &rhs ){
		this->_type = rhs._type;
	}
	return *this;
}
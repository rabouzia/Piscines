/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:16 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 12:15:27 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria( const AMateria &src ){*this = src;}

AMateria::~AMateria(){}

AMateria &				AMateria::operator=( AMateria const &from ){
	if (this != &from) {
		this->_type = from._type;
	}
	return *this;
}

const std::string &AMateria::getType(void) const{ return (_type); }
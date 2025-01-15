/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:34 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 22:10:32 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

MateriaSource::MateriaSource(std::string name){
	this->_name = name;
	
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &src ){ *this= src; }


AMateria* MateriaSource::createMateria(std::string const &type){
	   if (type == "ice") {
        return new Ice();
    } else if (type == "cure") {
        return new Cure();
    } else return NULL;
}


void MateriaSource::learnMateria(AMateria* spell){
	if (!spell)
		return;
	for (int i = 0; i < 4; i++){
		if (!_slots[i]){	
			_slots[i] = spell;
			return;
		}	
	}
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (_slots[i]){	
			delete _slots[i];
		}	
	}
}

MateriaSource&	MateriaSource::operator=( MateriaSource const &rhs ){
	
	if (this != &rhs) {
		for (int i = 0; i < 4; ++i) {
			delete this->_slots[i];
			if (rhs._slots[i])
				this->_slots[i] = rhs._slots[i]->clone();
			else
				this->_slots[i] = NULL;
		}
	}
	return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:18 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 21:44:34 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character()
{
	_name = "default";
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}
Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(const Character &src){
	this->_name = src._name;
	for (int i = 0; i < 4; i++){
		if (src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
		else
			this->_slots[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete this->_slots[i];
}

Character&	Character::operator=( Character const &src )
{
	if (this == &src)
		return (*this);
	
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
		{
			delete this->_slots[i];
			this->_slots[i] = NULL;
		}
		if (src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName () const{ return(this->_name); }

void Character::equip(AMateria* m){
	if (!m)
	{
		std::cout << "Invalid materia!" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (_slots[i] == NULL) {
			_slots[i] = m;
		std::cout << "Equiped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
		if (_slots[i] == m){
			std::cout << "Item " << m->getType() <<" is already equiped!" << std::endl;
			return;
		}
	}
	std::cout << "Equiped " << m->getType() << std::endl;

}

void Character::unequip(int i){
	if (get_slot(i) == false)
		return;
	std::cout << "Unequiped " << this->_slots[i]->getType()
			<< ", previously stored in slot " << i << std::endl;
	  _slots[i] = NULL;
}

bool Character::get_slot(int i)
{
	if (i < 0 || i >= 4){
		std::cout << i << " invalid slot!" << std::endl;
			 
		return (false);
	}
	if (this->_slots[i] == NULL){
		std::cout << i << " is empty!" << std::endl;
		return (false);
	}
	return true;
}

void Character::use(int i, ICharacter &target){
	if (get_slot(i) == false)
		return;
	std::cout << "Using " << this->_slots[i]->getType() << " stored in slot " << i << "!" << std::endl;
	this->_slots[i]->use(target);

}

void Character::display_inventory()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "Inventory of " << this->_name << ":" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
			std::cout << i << ". Empty" << std::endl;
		else
			std::cout << i << ". " << this->_slots[i]->getType() << std::endl;
	}
	std::cout << "===============================================" << std::endl;
}

void Character::empty_inventory()
{
	for (int i = 0; i < 4; i++)
		this->unequip(i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:29:01 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/14 16:45:51 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
};

void HumanB::attack(void)
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else 
        std::cout << _name << " has no weapon..." << std::endl;
}

void HumanB::setWeapon(Weapon& weap)
{
    _weapon = &weap;
}

HumanB::~HumanB(void) {

};
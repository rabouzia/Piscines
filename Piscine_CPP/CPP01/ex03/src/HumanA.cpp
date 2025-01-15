/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:29:04 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/14 16:43:46 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weap)
    : _weapon(weap) {
    _name = name;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
void HumanA::setWeapon(const Weapon& weap)
{
    _weapon = weap;
}


HumanA::~HumanA(void)
{
    
};
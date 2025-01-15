/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:29:08 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/14 16:41:16 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    _type = name;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
std::string Weapon::getType(void)
{
    return (this->_type);
}


Weapon::~Weapon()
{
    
}


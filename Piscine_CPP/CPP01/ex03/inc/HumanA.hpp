/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:28:10 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/14 16:40:04 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &_weapon;
        std::string _name;

    public:
        HumanA(const std::string name, Weapon &weap);
        void setWeapon(const Weapon& weap);
        void attack();
        ~HumanA();
};

#endif
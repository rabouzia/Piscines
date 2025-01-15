/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:38:22 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/14 13:08:57 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	
    Zombie* zombie_tab = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie_tab[i].setName(name);
    }
    return (zombie_tab);
}
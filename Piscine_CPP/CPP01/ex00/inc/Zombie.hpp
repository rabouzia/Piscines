/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:22:30 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/14 12:34:57 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		void announce();
		Zombie *newZombie(std::string name);
		Zombie(std::string choose_name);
		~Zombie();
};
void randomChump(std::string name);

#endif
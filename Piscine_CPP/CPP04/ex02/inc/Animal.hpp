/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:07 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/18 19:03:47 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{   
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &copy);
		Animal(const std::string &type);
        Animal &operator=(const Animal &copy);
        virtual std::string getType(void)const;
        virtual void makeSound()const = 0;
        virtual ~Animal();
};

#endif
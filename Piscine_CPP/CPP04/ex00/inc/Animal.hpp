/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:07 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/21 10:26:43 by ramzerk          ###   ########.fr       */
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
        Animal(); //Default constructor
        Animal(const Animal &copy); // Copy constructor
        Animal &operator=(const Animal &copy); //Copy assignment operator
        virtual std::string getType(void)const;
        virtual void makeSound()const;
        virtual ~Animal(); //Destructor
};

#endif
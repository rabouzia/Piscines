/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:13:39 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/18 17:23:53 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain
{

	private:
		Brain * burainu;
	
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        std::string getType(void)const;
        void makeSound() const;
        virtual ~Dog();
};

#endif       
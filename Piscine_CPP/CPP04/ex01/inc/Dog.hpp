/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:13:39 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/21 12:46:22 by ramzerk          ###   ########.fr       */
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
		std::string getIdea(int idx) const;
		void setIdea(int idx, std::string idea);
        void makeSound() const;
        virtual ~Dog();
};

#endif       
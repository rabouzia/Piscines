/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:14:26 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/21 12:47:10 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
	private:
		Brain * burainu;
    public:
        Cat();
		std::string getIdea(int idx) const;
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        std::string getType(void)const;
		void setIdea(int idx, std::string idea);
        void makeSound() const;
        virtual ~Cat();
};

#endif
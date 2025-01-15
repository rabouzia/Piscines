/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 12:39:42 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "--- Tests avec Animal, Dog et Cat ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " fait ce son: ";
    dog->makeSound();

    std::cout << cat->getType() << " fait ce son: ";
    cat->makeSound();

    std::cout << meta->getType() << " fait ce son: ";
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;
    std::cout << std::endl;
    std::cout << "\n--- Tests avec WrongAnimal et WrongCat ---" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " fait ce son: ";
    wrongAnimal->makeSound();
    std::cout << wrongCat->getType() << " fait ce son: ";
    wrongCat->makeSound();
    delete wrongAnimal;
    delete wrongCat;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/18 18:34:48 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

//   const Animal jo;
  std::cout << "-------------------[Mandatory tests 0]----------------------" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;
  delete i;
  std::cout << "-------------------[Mandatory tests 1]----------------------" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~[INIT]~~~~~~~~~~~~~~~" << std::endl;
  Animal *animals[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "[" << i << "] ";
    if (i < 5)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
    if (!animals[i]) {
      for (int j = 0; j < i; j++) {delete animals[j];}
      std::cout << "Memory alloctation error" << std::endl;
      return 1;
    }
  }

  std::cout << "~~~~~~~~~~~~~~~[COPY]~~~~~~~~~~~~~~~" << std::endl;
  
  
  Cat* catCopy = new Cat(*dynamic_cast<Cat*>(animals[0]));
  if (!catCopy) {
    std::cout << "Memory alloctation error" << std::endl;
    for (int i = 0; i < 10; i++) {delete animals[i];}
    return 1;
  }
  Dog* dogCopy = new Dog(*dynamic_cast<Dog*>(animals[5]));
  if (!dogCopy) {
    for (int i = 0; i < 10; i++) {delete animals[i];}
    	delete catCopy;
    std::cout << "Memory alloctation error" << std::endl;
    return 1;
  }
  std::cout << "~~~~~~~~~~~~~~~[CLEAR]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i  < 10; i++) {delete animals[i];}
  delete catCopy;
  delete dogCopy;
  return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:06:03 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/04 10:50:15 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main ()
{
    Data *d0 = new Data;
    Data *d1 = new Data("test");

    std::cout << "Value of d0 : " << d0 << std::endl;
    std::cout << "Result from functions : " << Serializer::serialize(d0) << std::endl;
	std::cout << "Result from functions : " << Serializer::deserialize(Serializer::serialize(d0)) << std::endl;
    
    std::cout << "Value of d1 : " << d1 << std::endl;
    std::cout << "Result from functions : " << Serializer::serialize(d1) << std::endl;
    std::cout << "Result from functions : " << Serializer::deserialize(Serializer::serialize(d1)) << std::endl;

    delete d0;
    delete d1;
}
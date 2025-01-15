/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:23:10 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/16 00:49:40 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default Construtor is called" << std::endl;
}

Fixed::Fixed(Fixed& f){
    std::cout << "Copy Construtor is called" << std::endl;
}

Fixed& Fixed :: operator=(const Fixed& F){

}

int Fixed::getRawBits(void){
    std::cout << "getRawBits member function called" << std::endl;
}
void Fixed::setRawBits(void){
    
}

Fixed::~Fixed(){
    std::cout << "Destructor is called" << std::endl;
}
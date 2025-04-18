/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:02:57 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/15 10:35:45 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

        Harl::Harl(){}
        void Harl::debug(void){
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
        }
        void Harl::info (void){
            std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
        }
        void warning(void){
            std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
        }
        void error(void){
            std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
        }
        void Harl::complain(std::string level){
            std::string levels[4]{"DEBUG", "INFO", "WARNING", "ERROR"};
        }
        Harl::~Harl(){}
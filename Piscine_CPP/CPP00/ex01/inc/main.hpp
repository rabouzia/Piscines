/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:07:54 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/13 16:32:45 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include "phonebook.hpp"
#include <stdio.h>
#include <stdlib.h>


int info_filler(Buku *book);
int fill_contact(Buku *book);
std::string get_input();
bool safe_getline(std::string *str);

#endif
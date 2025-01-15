/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/05 03:06:50 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename U, typename W>

void iter(T *array, U length, W fn){
    for (U i = 0; i < length; i++)
        fn(array[i]);
}


template <typename T>

void printer(T val) {
	std::cout << val << " ";
}

#endif

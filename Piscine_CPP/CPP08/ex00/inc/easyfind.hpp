/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/14 10:19:17 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

template <class T>
typename T::iterator easyfind(T& container, int value)
{
	if (container.empty())
		throw std::invalid_argument("Empty container");
	typename T::iterator result = std::find(container.begin(), container.end(), value);
	
	if (result == container.end())
		throw std::runtime_error("Value not found in this container");
	return result;
}

#endif
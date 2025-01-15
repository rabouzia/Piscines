/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/28 10:59:05 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
const T& min(const T& a, const T& b) {
	return a < b ? a : b;
}

template <typename T>
const T& max(const T& a, const T& b) {
	return a > b ? a : b;
}

#endif
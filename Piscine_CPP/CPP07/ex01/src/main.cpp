/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 03:07:38 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/05 03:07:40 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
	int arr1[] = {1, 2, 3, 4, 5};
	iter(arr1, 5, printer<int>);
	std::cout << std::endl;

	double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(arr2, 5, printer<double>);
	std::cout << std::endl;

	char arr3[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arr3, 5, printer<char>);
	std::cout << std::endl;

}
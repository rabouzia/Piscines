/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/15 16:33:02 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <algorithm>
#include <set>


class Span{
	
	private:
		std::multiset<int> _container;
		unsigned int _maxsize;
	
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span operator=(const Span &src);
		~Span();
		template <typename InputIterator>
		void addNumbers(InputIterator begin, InputIterator end) {
		for (InputIterator it = begin; it != end; ++it)
			addNumber(*it);
		}
	
		unsigned int getSize();
		unsigned int getMaxSize();
		void addNumber(int num);		
		int shortestSpan();
		int longestSpan();
};

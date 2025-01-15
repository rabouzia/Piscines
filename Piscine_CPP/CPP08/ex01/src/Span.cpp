/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 14:36:23 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/15 16:35:05 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxsize(0){}
Span::Span(unsigned int n) : _maxsize(n){}

Span::Span(const Span &copy): _container(copy._container), _maxsize(copy._maxsize){}

Span Span::operator=(const Span &src){
	if (this == &src)
		return *this;
	_maxsize = src._maxsize;
	_container = src._container;
	return *this;
}

Span::~Span(){}

unsigned int Span::getSize(){ return _container.size(); }
unsigned int Span::getMaxSize(){ return _maxsize; }

void Span::addNumber(int num){
	if (_container.size() >= _maxsize)
		throw std::length_error("Span is full");
	_container.insert(num);
}	
	
int Span::shortestSpan(){
	if (_container.size() < 2)
		throw std::length_error("Span must contain at leat 2 containers");
	
	std::multiset<int>::const_iterator it = _container.begin();
	unsigned int prev = *it;
	unsigned int min = *++it - prev;
	unsigned int current = 0;
	while(++it != _container.end())
	{
		current = *++it - prev;
		if (current > min)
			min = current;
		prev = *it;
	}
	return min;
}

int Span::longestSpan(){
	if (_container.size() < 2)
		throw std::length_error("Span must contain at leat 2 containers");
	return *_container.rbegin() - *_container.begin();
}

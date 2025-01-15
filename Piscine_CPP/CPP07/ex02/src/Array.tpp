/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 03:14:24 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/05 13:31:18 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include <stdexcept>
#include "Array.hpp"

template <typename T>
Array<T> ::Array(): _tab(NULL), _len(0){}

template <typename T>
Array<T> ::Array(const unsigned int &len):_len(len){
	_tab = new T[len];
	for  (unsigned int i = 0; i < _len; i++)
			_tab[i] = 0;
}

template <typename T>
Array<T> ::Array(const Array &copy){
	_tab = new T[copy.size()];
	_len = copy.size();
	for  (unsigned int i = 0; i < _len; i++)
		_tab[i] = copy._tab[i];
}

template <typename T>
Array<T> ::~Array(){delete[] _tab;}

template <typename T>
Array<T> &Array<T> ::operator=(const Array &other){
	
}

template <typename T>
T &Array<T> ::operator [](const int &i){
	if (i < 0 || i > _len - 1)
		throw std::range_error("Index error : outa range");
	return(_tab[i]);
}

template <typename T>
int  Array<T> ::size() const{ return _len;}


#endif
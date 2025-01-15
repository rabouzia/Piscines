/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/05 13:19:43 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ARRAY_HPP
#define ARRAY_HPP


template <class T> class Array{
	
	private :
		T* _tab;
		unsigned int _len;
			
	public :
		Array();
		Array(const unsigned int &len);
		Array(const Array &copy);
		~Array();
		Array<T> &operator=(const Array &other);
		T &operator [](const int &index);
		int size() const;
				
};


#endif
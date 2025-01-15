/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/04 10:46:38 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <string>
# include <stdint.h>

class Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &source);
		Serializer &operator=(const Serializer &source);
		~Serializer();

	public:
		static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
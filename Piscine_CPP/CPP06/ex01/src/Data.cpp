/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:42:40 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/04 10:43:35 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data():
    _name("default")
{}

Data::Data(const std::string &name):
    _name(name)
{}

Data::Data(const Data &data)
{
    *this = data;
}

Data::~Data()
{}

Data &Data::operator=(const Data &data)
{
    _name = data.getName();
    return (*this);
}

const std::string &Data::getName() const
{
    return (_name);
}
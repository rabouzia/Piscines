/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:31:57 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/04 10:32:04 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    private:
            std::string _name;
    public:
            Data();
            Data(const std::string &name);
            Data(const Data &data);
            ~Data();
            Data &operator=(const Data &data);
            const std::string &getName() const;
};

#endif
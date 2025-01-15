/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:49:41 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:32:44 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
# include <iostream>


class Ice : public AMateria
{

	public:

		Ice();
		Ice(std::string _type);
		Ice( Ice const &src );
		~Ice();
		Ice &		operator=( Ice const &rhs );
		Ice* clone() const;
		void use(ICharacter &target);
};


#endif /* ************************************************************* ICE_H */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:49:46 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 21:50:39 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	
	public:

		Cure();
		Cure(std::string type);
		Cure( Cure const &src );
		~Cure();
		Cure &		operator=( Cure const &rhs );
		Cure *clone() const;
		void use(ICharacter &target);

};


#endif /* ************************************************************ CURE_H */
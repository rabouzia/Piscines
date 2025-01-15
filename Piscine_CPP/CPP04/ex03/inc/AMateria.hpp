/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:00 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/20 19:21:50 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


#include "ICharacter.hpp"
# include <iostream>


class AMateria
{
	
	protected:
		std::string _type;	
	public:

		AMateria();
		AMateria( AMateria const &src );
		virtual ~AMateria();
		AMateria &operator=( AMateria const &rhs );

		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target) = 0;
};


#endif /* ******************************************************** AMATERIA_H */
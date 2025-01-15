/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:10 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 10:34:52 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_slots[4];
		std::string _name;
		
	public:

		MateriaSource();
		MateriaSource(std::string name);
		MateriaSource( MateriaSource const &src );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);

		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const &rhs );


};


#endif /* *************************************************** MATERIASOURCE_H */
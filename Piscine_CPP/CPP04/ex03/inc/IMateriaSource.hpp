/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:50:13 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/21 10:35:36 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP


# include <string>
# include <iostream>
# include "AMateria.hpp"


class IMateriaSource
{
	private:

	public:

		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
		IMateriaSource &		operator=( IMateriaSource const &rhs );


};


#endif /* ************************************************** IMATERIASOURCE_H */
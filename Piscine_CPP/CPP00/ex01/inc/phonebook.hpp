/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:01:09 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/13 15:14:36 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"
#include "contact.hpp"

class Buku
{
private:
	Contacto _contacts[8]; // Array to store 8 contacts
	int _contact_count; // how many contacts are stored

public:
	Buku();
	~Buku();
	void add();
	void get_contact(int index);
	void search();
	int get_count(void);
};

#endif

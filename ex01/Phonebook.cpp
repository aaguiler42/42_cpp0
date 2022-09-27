/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:50:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/09/27 16:47:29 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){
	_nContacts = 0;
}

Phonebook::~Phonebook(){
	
}

void	Phonebook::add_contact(void){
	Contact	aux;

	if (!aux.inicialize_fields()){
		_contacts[_nContacts % 8] = aux;
		_nContacts++;
	}

}

void	Phonebook::print_contacts(void){
	int	n = _nContacts >= 8 ? 8 : _nContacts;

	for (int i = 0; i < n; i++){
		_contacts[i].print_table();
	}
}

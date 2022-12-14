/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:50:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/04 20:35:57 by aaguiler         ###   ########.fr       */
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

	std::cout << "|";
	for (int i = 0; i < 5; i++){
		if (_contacts[0]._field_names[i].length() > 10)
			std::cout << _contacts[0]._field_names[i].substr(0, 9) << ".|"; 
		else
			std::cout << std::setw(10) << _contacts[0]._field_names[i] << "|";
	}
	std::cout << "\n";
	for (int i = 0; i < n; i++){
		_contacts[i].print_table();
	}
}

void	Phonebook::print_n_contact(int n){
	if (n <= 0 || n > 8 || (n > _nContacts)){
		std::cout << "Invalid index\n";
		return ;
	}
	_contacts[(n - 1) % 8].print_contact();
}

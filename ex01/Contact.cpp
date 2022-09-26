/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:50:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/09/26 19:57:20 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::_field_names[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

Contact::Contact(){

}

Contact::~Contact(){
	
}

int	Contact::inicialize_fields(void){
	std::string tf[5];

	for (int i = 0; i < 5; i++){
		std::cout << _field_names[i] + ": ";
		std::getline(std::cin, tf[i]);
		if (tf[i].empty())
			return (std::cout << "You can't save a contact with empty fields\n", 1);
	}
	for (int i = 0; i < 5; i++){
		_fields[i] = tf[i];
	}
	return(1);
}

int	Contact::print_contact(void){
	for (int i = 0; i < 5; i++){
		std::cout << _field_names[i] + ": " + _fields[i] + "\n";
	}
	return(1);
}

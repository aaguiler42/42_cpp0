/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:50:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/08/04 15:38:25 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::field_names[5] = {
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
		std::cout << field_names[i] + ": ";
		std::getline(std::cin, tf[i]);
		if (tf[i].empty())
			return (std::cout << "You can't save a contact with empty fields\n", 1);
	}
	for (int i = 0; i < 5; i++){
		fields[i] = tf[i];
		std::cout << tf[i] + "\n";
	}
	return(1);
}

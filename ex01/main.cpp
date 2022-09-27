/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:53:32 by aaguiler          #+#    #+#             */
/*   Updated: 2022/09/27 16:31:28 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void){
	Phonebook	book;
	std::string	entry;

	do{
		std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, entry);
		if (!entry.compare("ADD")) {
			book.add_contact();
		} else if (!entry.compare("SEARCH")) {
			book.print_contacts();

		}
	}while(entry.compare("EXIT"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:53:32 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/04 21:21:00 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void){
	Phonebook	book;
	std::string	entry;
	std::string	number;
	int			intNumber;

	do{
		std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, entry);
		if (std::cin.eof())
			break;
		if (!entry.compare("ADD")) {
			book.add_contact();
		} else if (!entry.compare("SEARCH")) {
			book.print_contacts();
			std::cout << "Filter: ";
			std::getline(std::cin, number);
			if (std::cin.eof())
				break;
			if ((number[0] >= '0' && number[0] <= '9') || number.length() >= 8)
				intNumber = std::stoi(number);
			else
				intNumber = -1;
			book.print_n_contact(intNumber);
		}
	}while(entry.compare("EXIT"));
}

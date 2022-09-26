/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:53:32 by aaguiler          #+#    #+#             */
/*   Updated: 2022/09/26 20:30:16 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main(void){
	std::string entry;

	do{
		std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
		std::getline(std::cin, entry);
		if (entry.compare("ADD")) {
			std::cout << "You have entered ADD\n";

		} else if (entry.compare("SEARCH")) {
			std::cout << "You have entered SEARCH\n";

		}
	}while(entry.compare("EXIT"));
}
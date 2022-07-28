/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:06:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/07/28 17:03:29 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				if (argv[i][j] == -61) {
					if (argv[i][++j] == -89 || argv[i][j] == -121)
						std::cout << "Ç";
					else if (argv[i][j] == -79 || argv[i][j] == -111)
						std::cout << "Ñ";
				} else
					std::cout << (char)std::toupper(argv[i][j]);
			}
		}
		std::cout << "\n";
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:23:50 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/04 20:36:35 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class Phonebook {
private:
	int		_nContacts;
	Contact	_contacts[8];

public:
	Phonebook();
	~Phonebook();

	void	add_contact(void);
	int		get_n_contacts(void);
	void	print_contacts(void);
	void	print_n_contact(int n);
};

#endif

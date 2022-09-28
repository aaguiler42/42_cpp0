/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:23:50 by aaguiler          #+#    #+#             */
/*   Updated: 2022/09/28 16:54:16 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
private:
	std::string	_fields[5];

public:
	static std::string	_field_names[5];
	Contact();
	~Contact();
	int		inicialize_fields(void);
	void	print_contact(void);
	void	print_table(void);
};

#endif

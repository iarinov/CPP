/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:33:49 by aiarinov          #+#    #+#             */
/*   Updated: 2022/10/30 16:40:42 by aiarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "ContactInfo.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		size;
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact(struct contactInfo info);
		void	printContact(int index);

		int getSize() const;
		const Contact	*getContacts() const;
};

std::ostream	&operator<<(std::ostream &os, const PhoneBook &phonebook);

#endif
